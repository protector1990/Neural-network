#pragma once
#include "Layer.h"
#include <exception>
#include <vector>

namespace neural {

	template <typename Input, typename Output>
	class NeuralNetwork {
	protected:
		Layer** layers;
		int numOfLayers;

	public:
		NeuralNetwork(std::vector<Input>& numsOfNeurons);
		virtual ~NeuralNetwork() {
			for (int i = 0; i < numOfLayers; i++)
				delete layers[i];

			delete[] layers;
		}

		virtual void train(int epochs) = 0;
		virtual Output propagate(Input* inputVector, int length) = 0;
	};

	template<typename Input, typename Output>
	inline NeuralNetwork<Input, Output>::NeuralNetwork(std::vector<Input>& numsOfNeurons)
	{
		layers = new Layer*[numsOfNeurons.size()];
		layers[0] = new Layer(numsOfNeurons.at(0));
		for (int i = 1; i < numsOfNeurons.size(); i++)
			layers[i] = new Layer(numsOfNeurons.at(i), layers[i - 1]);
	}

}