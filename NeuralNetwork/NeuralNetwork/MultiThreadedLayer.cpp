#include "MultiThreadedLayer.h"
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
				break;
			}
			}
			_started = false;
			_layer->threadFinished();
		}
	}

	void LayerWorkerThread::run(int mode)
	{
		if (_started) {
			throw exception("Thread already at work!");
		}
		{
			unique_lock<mutex> l(_m);
			_mode = mode;
			_started = true;
		}
		_threadCv.notify_one();
	}

	void LayerWorkerThread::initBackPropagation(int currentIndex)
	{
		_currentBackPropIndex = currentIndex;
	}

	void MultiThreadedLayer::respond()
	{
		_threadsAtWork = _threads.size();
		int t = _threadsAtWork;
		for (int i = 0; i < t; ++i) {
			_threads[i]->run(1);
		}
		{
			std::unique_lock<mutex> l(_m);
			_layerCv.wait(l, [this]() {return _threadsAtWork == 0; });
		}
	}

	void MultiThreadedLayer::train(float learningRate)
	{

		_threadsAtWork = _threads.size();
		int t = _threadsAtWork;
		for (int i = 0; i < t; ++i) {
			_threads[i]->initBackPropagation(i);
			_threads[i]->run(0);
		}
		{
			std::unique_lock<std::mutex> l(_m);
			_layerCv.wait(l, [this]() {return _threadsAtWork == 0; });
		}
		for (int i = 0; i < t - 1; ++i)
		{
			_threadsAtWork = _threads.size();
			for (int j = 0; j < t; ++j) {
				_threads[j]->run(0);
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