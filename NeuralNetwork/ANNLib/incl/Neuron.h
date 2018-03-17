#pragma once

namespace MFNeuralNetwork {

	const double LEARNING_RATE = 0.02;//define as needed

	class Neuron {
		friend class Layer;
		friend class NetworkLoader;
		int _numPrev;
		Neuron * _previous;
		double * _weights;
		double _bias;
		double _output;

		double _outDerivative;

	public:
		void train(float learningRate, int prevStartIndex, int prevEndIndex);
		Neuron(Layer * prevLayer = nullptr);
		~Neuron() { delete[] _weights; }

		virtual void respond();
	};

	
}