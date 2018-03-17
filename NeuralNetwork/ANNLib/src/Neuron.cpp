#include "..\incl\Neuron.h"
#include "..\incl\Layer.h"
#include <random>
#include <cmath>

namespace MFNeuralNetwork {

	void Neuron::train(float learningRate, int prevStartIndex, int prevEndIndex)
	{
		//_outDerivative *= (_output * (1. - _output));
		double netDerivative = _outDerivative * _output * (1. - _output);
		double delta = netDerivative * learningRate;

		for (int i = prevStartIndex; i <= prevEndIndex; i++) {
			_previous[i]._outDerivative += _weights[i] * netDerivative;
			double a = _weights[i];
			_weights[i] += _previous[i]._output * delta;
			double b = _weights[i];
			int x = 0;
		}
	}

	Neuron::Neuron(Layer * prevLayer) : _output(0.), _outDerivative(0.)
	{
		if (prevLayer) {
			_previous = prevLayer->_neurons;
			_weights = new double[prevLayer->_numOf];

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
		double sum = 0.;
		for (int i = 0; i < _numPrev; i++)
			sum += _weights[i] * _previous[i]._output;

		// out
		_output = 1. / (1. + exp(-sum));

		// reset dEt/dnet
		_outDerivative = 0.;
	}
}