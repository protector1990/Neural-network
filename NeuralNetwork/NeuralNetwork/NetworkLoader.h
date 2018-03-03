#pragma once
#include "NeuralNetwork.h"

namespace MFNeuralNetwork {
	class NetworkLoader {
	public:
		NeuralNetwork* loadNetwork(const char* path);
		NeuralNetwork* newRandomNetwork(size_t numOfLayers, size_t* numOfNeuronsPerLayer);
		void saveNetwork(NeuralNetwork* network, const char* path);
	};
}