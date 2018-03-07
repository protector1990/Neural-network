#include "Neuron.h"
#include "Layer.h"
#include <random>
#include <cmath>

namespace MFNeuralNetwork {

	void Neuron::train(float learningRate, int prevStartIndex, int prevEndIndex)
	{
		float delta = (1.f - _output) * (1.f + _output) * _error * learningRate;

		for (int i = prevStartIndex; i <= prevEndIndex; i++) {
			_previous[i]._error += _weights[i] * _error;
			_weights[i] += _previous[i]._output * delta;
		}
	}

	Neuron::Neuron(Layer * prevLayer) : _output(0.f), _error(0.f)
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
		float sum = 0.0;
		for (int i = 0; i < _numPrev; i++)
			sum += _weights[i] * _previous[i]._output;

		_output = sum / (1 + abs(sum));//faster, but less precise than a sigmoid function

		_error = 0;
	}

	void Neuron::setError(float desiredOutcome)
	{
		_error = desiredOutcome - _output;
	}
}