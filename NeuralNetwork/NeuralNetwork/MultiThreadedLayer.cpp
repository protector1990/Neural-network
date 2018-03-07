#include "MultiThreadedLayer.h"
#include <mutex>
#include <iostream>

using namespace std;

void MFNeuralNetwork::LayerWorkerThread::workerThreadMainLoop()
{
	while (true) {
		unique_lock<mutex> l(_m);
		_cv.wait(l, [this]() {return _started; });
		Neuron* currNeuron = _startNeuron;
		do {
			currNeuron->respond();
			currNeuron++;
		} while (currNeuron != _endNeuron);
		currNeuron->respond();
		_started = false;
		_layer->threadFinished();
	}
}

void MFNeuralNetwork::LayerWorkerThread::run()
{
	if (_started) {
		throw exception("Thread already at work!");
	}
	{
		unique_lock<mutex> l(_m);
		_started = true;
	}
	_cv.notify_one();
}

void MFNeuralNetwork::MultiThreadedLayer::respond()
{
	_threadsAtWork = _threads.size();
	int t = _threadsAtWork;
	for (int i = 0; i < t; ++i) {
		_threads[i]->run();
	}
	{
		std::unique_lock<std::mutex> l(_m);
		_cv.wait(l, [this]() {return _threadsAtWork == 0; });
	}
	int x = 5;
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
	int numOfNeuronsPerThread =  ceilf((float) numNeurons / numOfThreads);
	for (int i = 0; i < numOfThreads; ++i) {
		int startNeuron = numOfNeuronsPerThread * i < numNeurons ? numOfNeuronsPerThread * i : numNeurons - 1;
		int endNeuron = startNeuron + numOfNeuronsPerThread <= numNeurons ? startNeuron + numOfNeuronsPerThread - 1 : numNeurons - 1;
		_threads.push_back(new LayerWorkerThread(this, _neurons + startNeuron, _neurons + endNeuron));
	}
}
