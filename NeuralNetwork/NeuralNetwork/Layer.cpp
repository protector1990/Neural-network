#include "Layer.h"
#include "Neuron.h"
#include <stdlib.h>
#include <new>

using namespace std;

namespace MFNeuralNetwork {

	Layer::Layer(int numNeurons, Layer * previousLayer) : _numOf(numNeurons)
	{
		_neurons = (Neuron*)malloc(numNeurons * sizeof(Neuron));
		for (int i = 0; i < numNeurons; i++) {
			new (_neurons + i) Neuron(previousLayer);
		}
	}

	void Layer::respond()
	{
		for (int i = 0; i < _numOf; i++)
			_neurons[i].respond();
	}

	void Layer::setErrors(float* desiredResults)
	{
		for (int i = 0; i < _numOf; i++)
			_neurons[i].setError(desiredResults[i]);
	}

	void Layer::train(float learningRate)
	{
		for (int i = 0; i < _numOf; i++)
			_neurons[i].train(learningRate);
	}

	void Layer::input(float * value)
	{
		for (int i = _numOf - 1; i >= 0; i--) {
			_neurons[i]._output = value[i];
		}
	}

	int Layer::output()
	{
		int ans = 0;
		float best = -1000000.f;
		for (int i = _numOf - 1; i >= 0; i--) {
			if (_neurons[i]._output > best) {
				best = _neurons[i]._output;
				ans = i;
			}
		}

		return ans;
	}
	shared_ptr<float[]> Layer::outputSet()
	{
		float* ret = new float[_numOf];
		for (size_t i = 0; i < _numOf; ++i) {
			ret[i] = _neurons[i]._output;
		}
		return shared_ptr<float[]>(ret);
	}
}