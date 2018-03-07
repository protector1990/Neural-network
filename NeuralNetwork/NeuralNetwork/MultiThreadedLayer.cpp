#include "MultiThreadedLayer.h"
#include <mutex>
#include <iostream>

using namespace std;

void MFNeuralNetwork::LayerWorkerThread::workerThreadMainLoop()
{
	while (true) {
		unique_lock<mutex> l(_m);
		_cv.wait(l, [this]() {return _started; });
		switch (_mode) {
		case 0: {
			int prevStartIndex = _layer->_backPropStartNeuronIndexes[_currentBackPropIndex];
			int prevEndIndex = _layer->_backPropEndNeuronIndexes[_currentBackPropIndex];
			Neuron* currNeuron = _startNeuron;
			do {
				currNeuron->train(0.2f, prevStartIndex, prevEndIndex);
				currNeuron++;
			} while (currNeuron != _endNeuron);
			currNeuron->train(0.2f, prevStartIndex, prevEndIndex);
			_currentBackPropIndex++;
			if (_currentBackPropIndex == _layer->_threads.size()) {
				_currentBackPropIndex = 0;
			}
			break;
		}
		case 1: {
			Neuron* currNeuron = _startNeuron;
			do {
				currNeuron->respond();
				currNeuron++;
			} while (currNeuron != _endNeuron);
			currNeuron->respond();
			cout << "f" << endl;
			break;
		}
		}
		_started = false;
		_layer->threadFinished();
	}
}

void MFNeuralNetwork::LayerWorkerThread::run(int mode)
{
	if (_started) {
		throw exception("Thread already at work!");
	}
	{
		unique_lock<mutex> l(_m);
		_mode = mode;
		_started = true;
	}
	_cv.notify_one();
}

void MFNeuralNetwork::LayerWorkerThread::initBackPropagation(int currentIndex)
{
	_currentBackPropIndex = currentIndex;
}

void MFNeuralNetwork::MultiThreadedLayer::respond()
{
	_threadsAtWork = _threads.size();
	int t = _threadsAtWork;
	for (int i = 0; i < t; ++i) {
		_threads[i]->run(1);
	}
	{
		std::unique_lock<std::mutex> l(_m);
		_cv.wait(l, [this]() {return _threadsAtWork == 0; });
	}
	//for (auto thread : _threads) {
	//	cout << thread->_started;
	//}
	cout << "F" << endl;
}

void MFNeuralNetwork::MultiThreadedLayer::train(float learningRate)
{
	cout << "s" << endl;
	//Layer::train(learningRate); //leave it at this for now
	_threadsAtWork = _threads.size();
	int t = _threadsAtWork;
	for (int i = 0; i < t; ++i) {
		_threads[i]->initBackPropagation(i);
		_threads[i]->run(0);
	}
	{
		std::unique_lock<std::mutex> l(_m);
		_cv.wait(l, [this]() {return _threadsAtWork == 0; });
	}
	for (int i = 0; i < t - 1; ++i)
	{
		for (int j = 0; j < t; ++j) {
			_threads[j]->run(0);
		}
		{
			std::unique_lock<std::mutex> l(_m);
			_cv.wait(l, [this]() {return _threadsAtWork == 0; });
		}
	}
}

void MFNeuralNetwork::MultiThreadedLayer::threadFinished() {
	{
		std::lock_guard<std::mutex> l(_m);
		_threadsAtWork--;
	}
	if (_threadsAtWork == 0) {
		_cv.notify_one();
	}
}

MFNeuralNetwork::MultiThreadedLayer::MultiThreadedLayer(int numNeurons, Layer * prevLayer, int numOfThreads) :
	Layer(numNeurons, prevLayer)
{
	int numOfNeuronsPerThread = ceilf((float) numNeurons / numOfThreads);
	for (int i = 0; i < numOfThreads; ++i) {
		int startNeuron = numOfNeuronsPerThread * i < numNeurons ? numOfNeuronsPerThread * i : numNeurons - 1;
		int endNeuron = startNeuron + numOfNeuronsPerThread <= numNeurons ? startNeuron + numOfNeuronsPerThread - 1 : numNeurons - 1;
		_threads.push_back(new LayerWorkerThread(this, _neurons + startNeuron, _neurons + endNeuron));
	}

	int numPrevNeuronsPerThread = ceil((float)prevLayer->getNumOf() / numOfThreads);
	int numPrevNeurons = prevLayer->getNumOf();
	_backPropStartNeuronIndexes = new int[numOfThreads];
	_backPropEndNeuronIndexes = new int[numOfThreads];
	for (int i = 0; i < numOfThreads; ++i) {
		int startNeuron = numPrevNeuronsPerThread * i < numPrevNeurons ? numPrevNeuronsPerThread * i : numPrevNeurons - 1;
		int endNeuron = startNeuron + numPrevNeuronsPerThread <= numPrevNeurons ? startNeuron + numPrevNeuronsPerThread - 1 : numPrevNeurons - 1;
		_backPropStartNeuronIndexes[i] = startNeuron;
		_backPropEndNeuronIndexes[i] = endNeuron;
	}
}
