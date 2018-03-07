#pragma once
#include "Neuron.h"
#include <memory>

namespace MFNeuralNetwork {
	class Layer {
	protected:
		friend class Neuron;
		friend class BinNumNetwork;
		friend class NeuralNetwork;
		friend class NetworkLoader;
		int _numOf;
		Neuron * _neurons;
		Layer* _prevLayer;

		void input(float * value);
		int output();
		std::unique_ptr<float[]> outputSet();
	public:
		Layer(int numNeurons, Layer * previousLayer = nullptr);
		~Layer();

		inline int getNumOf() {
			return _numOf;
		}

		virtual void respond();
		void setErrors(float* desiredResults);
		virtual void train(float learningRate);
	};
}