#pragma once
#include "Layer.h"

namespace MFNeuralNetwork {

	class MultiThreadedLayer2 : public Layer {
		friend class NetworkLoader;
	private:
		int _numOfNeuronsPerThread;
		int _numOfThreads;
		void run(Neuron* firstNeuron, Neuron* lastNeuron);
		virtual void respond() override;
		virtual void train(float learningRate) override;
	public:
		MultiThreadedLayer2(int numNeurons, Layer* prevLayer, int numOfThreads);
	};

}