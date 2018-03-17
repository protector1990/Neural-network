#include "Neuron.h"
#include "Layer.h"
#include <random>
#include <cmath>

namespace MFNeuralNetwork {

	void Neuron::train(float learningRate, int prevStartIndex, int prevEndIndex)
	{
		_derivative *= (_output * (1.f - _output));
		float delta = _derivative * learningRate;

		for (int i = prevStartIndex; i <= prevEndIndex; i++) {
			_previous[i]._derivative += _weights[i] * _derivative;
			_weights[i] += _previous[i]._output * delta;
		}
	}

	Neuron::Neuron(Layer * prevLayer) : _output(0.f), _derivative(0.f)
	{
		if (prevLayer) {
			_previous = prevLayer->_neurons;
			_weights = new float[prevLayer->_numOf];

			//std::random_device rd;
			//std::mt19937 gen(rd());
			//std::uniform_real_distribution<float> dis(-1.0, 1.0);
			//
			//for (int i = 0; i < prevLayer->_numOf; i++) {
			//	weights[i] = dis(gen);
			//}

			_numPrev = prevLayer->_numOf;
		}
		else {
			_previous = nullptr;
			_weights = nullptr;
			_numPrev = 0;
		}

		_output = 0;
	}

	void Neuron::respond()
	{
		// net
		float sum = 0.0;
		for (int i = 0; i < _numPrev; i++)
			sum += _weights[i] * _previous[i]._output;

		// out
		_output = sum / (1.f + exp(-sum));

		// reset dEt/dnet
		_derivative = 0.f;
	}
}