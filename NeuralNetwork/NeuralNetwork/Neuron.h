#pragma once

namespace MFNeuralNetwork {

	const float LEARNING_RATE = 0.02f;//define as needed

	class Neuron {
		friend class Layer;
		friend class NetworkLoader;
		int _numPrev;
		Neuron * _previous;
		float * _weights;
		float _bias;
		float _output;

		float _error;

		void train(float learningRate);
	public:
		Neuron(Layer * prevLayer = nullptr);
		~Neuron() { delete[] _weights; }

		virtual void respond();
		void setError(float desiredOutcome);
	};
}