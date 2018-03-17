#include "..\incl\MultiThreadedLayer.h"
#include <mutex>
#include <iostream>

using namespace std;

namespace MFNeuralNetwork {

	void LayerWorkerThread::workerThreadMainLoop()
	{
		while (true) {
			unique_lock<mutex> l(_m);
			_threadCv.wait(l, [this]() {return _started; });
			switch (_mode) {
			case MOD_TRAIN: {
				int prevStartIndex = _layer->_backPropStartNeuronIndexes[_currentBackPropIndex];
				int prevEndIndex = _layer->_backPropEndNeuronIndexes[_currentBackPropIndex];
				Neuron* currNeuron = _startNeuron;
				do {
					currNeuron->train(_learningRate, prevStartIndex, prevEndIndex);
					currNeuron++;
				} while (currNeuron != _endNeuron);
				currNeuron->train(_learningRate, prevStartIndex, prevEndIndex);
				_currentBackPropIndex++;
				if (_currentBackPropIndex == _layer->_threads.size()) {
					_currentBackPropIndex = 0;
				}
				break;
			}
			case MOD_RESPOND: {
				Neuron* currNeuron = _startNeuron;
				do {
					currNeuron->respond();
					currNeuron++;
				} while (currNeuron != _endNeuron);
				currNeuron->respond();
				break;
			}
			}
			_started = false;
			_layer->threadFinished();
		}
	}

	void LayerWorkerThread::run(Mode m)
	{
		if (_started) {
			throw exception("Thread already at work!");
		}
		{
			unique_lock<mutex> l(_m);
			_mode = m;
			_started = true;
		}
		_threadCv.notify_one();
	}

	void LayerWorkerThread::initBackPropagation(int currentIndex, float learningRate)
	{
		_currentBackPropIndex = currentIndex;
		_learningRate = learningRate;
	}

	void MultiThreadedLayer::respond()
	{
		_threadsAtWork = _threads.size();
		int t = _threadsAtWork;
		for (int i = 0; i < t; ++i) {
			_threads[i]->run(LayerWorkerThread::Mode::MOD_RESPOND);
		}
		{
			std::unique_lock<mutex> l(_m);
			_layerCv.wait(l, [this]() {return _threadsAtWork == 0; });
		}
	}

	void MultiThreadedLayer::train(double learningRate)
	{

		_threadsAtWork = _threads.size();
		int t = _threadsAtWork;
		for (int i = 0; i < t; ++i) {
			_threads[i]->initBackPropagation(i, learningRate);
			_threads[i]->run(LayerWorkerThread::Mode::MOD_TRAIN);
		}
		{
			std::unique_lock<std::mutex> l(_m);
			_layerCv.wait(l, [this]() {return _threadsAtWork == 0; });
		}
		for (int i = 0; i < t - 1; ++i)
		{
			_threadsAtWork = _threads.size();
			for (int j = 0; j < t; ++j) {
				_threads[j]->run(LayerWorkerThread::Mode::MOD_TRAIN);
			}
			{
				unique_lock<mutex> l(_m);
				_layerCv.wait(l, [this]() {return _threadsAtWork == 0; });
			}
		}
	}

	void MultiThreadedLayer::threadFinished() {
		{
			unique_lock<mutex> l(_m);
			_threadsAtWork--;
		}
		if (_threadsAtWork == 0) {
			_layerCv.notify_one();
		}
	}

	MultiThreadedLayer::MultiThreadedLayer(int numNeurons, Layer * prevLayer, int numOfThreads) :
		Layer(numNeurons, prevLayer)
	{
		int numOfNeuronsPerThread = ceilf((float)numNeurons / numOfThreads);
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
}