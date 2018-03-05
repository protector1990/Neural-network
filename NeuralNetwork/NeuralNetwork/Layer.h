#pragma once
#include "Neuron.h"
#include <memory>

namespace MFNeuralNetwork {

	class Layer {
	private:
		friend class Neuron;
		friend class BinNumNetwork;
		friend class NeuralNetwork;
		friend class NetworkLoader;
		int _numOf;
		Neuron * _neurons;

		void input(float * value);
		int output();
		std::shared_ptr<float[]> outputSet();
	public:
		Layer(int numNeurons, Layer * previousLayer = nullptr);
		~Layer() { delete _neurons; }

		void respond();
		void setErrors(float* desiredResults);
		void train(float learningRate);
	};
}