#include "..\incl\Layer.h"
#include "..\incl\Neuron.h"
#include <stdlib.h>
#include <new>

using namespace std;

namespace MFNeuralNetwork {

	Layer::Layer(int numNeurons, Layer * previousLayer) : 
		_numOf(numNeurons),
		_prevLayer(previousLayer)
	{
		_neurons = new Neuron[numNeurons]{ previousLayer };
	}

	Layer::~Layer() {
		delete[] _neurons;
	}

	void Layer::respond()
	{
		for (int i = 0; i < _numOf; i++)
			_neurons[i].respond();
	}

	void Layer::setErrors(float* desiredResults)
	{
		for (int i = 0; i < _numOf; i++) {
			_neurons[i]._outDerivative = (_neurons[i]._output - desiredResults[i]);
		}
	}

	void Layer::train(double learningRate)
	{
		for (int i = 0; i < _numOf; i++)
			_neurons[i].train(learningRate, 0, _prevLayer->_numOf - 1);
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
		float best = -1000000.;
		for (int i = _numOf - 1; i >= 0; i--) {
			if (_neurons[i]._output > best) {
				best = _neurons[i]._output;
				ans = i;
			}
		}

		return ans;
	}
	unique_ptr<double[]> Layer::outputSet()
	{
		double* ret = new double[_numOf];
		for (size_t i = 0; i < _numOf; ++i) {
			ret[i] = _neurons[i]._output;
		}
		return unique_ptr<double[]>(ret);
	}
}