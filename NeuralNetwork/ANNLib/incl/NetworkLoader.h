#pragma once
#include "NeuralNetwork.h"

namespace MFNeuralNetwork {
	class NetworkLoader {
	public:
		NeuralNetwork* loadNetwork(const char* path, const char* layerTypes = nullptr, int* numbersOfThreads = nullptr);
		NeuralNetwork* newRandomNetwork(size_t numOfLayers, size_t* numOfNeuronsPerLayer, const char* layerTypes = nullptr, int* numbersOfThreads = nullptr);
		void saveNetwork(NeuralNetwork* network, const char* path);
	};
}