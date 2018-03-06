#include "MultiThreadedLayer2.h"
#include <thread>

using namespace std;

namespace MFNeuralNetwork {

	void MultiThreadedLayer2::run(Neuron* firstNeuron, Neuron* lastNeuron) {
		Neuron* currNeuron = firstNeuron;
		do {
			currNeuron->respond();
			currNeuron++;
		} while (currNeuron != lastNeuron);
	}

	void MultiThreadedLayer2::respond()
	{
		thread** threads = new thread*[_numOfThreads];
		for (int i = 0; i < _numOfThreads; ++i) {
			int startNeuron = _numOfNeuronsPerThread * i < _numOf ? _numOfNeuronsPerThread * i : _numOf - 1;
			int endNeuron = startNeuron + _numOfNeuronsPerThread < _numOf ? startNeuron + _numOfNeuronsPerThread : _numOf - 1;
			threads[i] = new thread(&MultiThreadedLayer2::run, this, _neurons + startNeuron, _neurons + endNeuron);
		}
		for (int i = 0; i < _numOfThreads; ++i) {
			threads[i]->join();
		}
		for (int i = 0; i < _numOfThreads; ++i) {
			delete threads[i];
		}
		delete[] threads;
	}

	void MultiThreadedLayer2::train(float learningRate)
	{
		Layer::train(learningRate);
	}

	MultiThreadedLayer2::MultiThreadedLayer2(int numNeurons, Layer * prevLayer, int numOfThreads)
		: Layer(numNeurons, prevLayer),
		_numOfThreads(numOfThreads)
	{
		_numOfNeuronsPerThread = ceilf((float)numNeurons / numOfThreads);
	}
}