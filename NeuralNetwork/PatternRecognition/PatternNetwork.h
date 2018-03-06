#pragma once
#include "NeuralNetwork.h"
#include <string>

namespace neural {

	class PatternNetwork : public NeuralNetwork<int, std::string> {
	public:
		PatternNetwork(std::vector<int>& numsOfNeurons) : NeuralNetwork(numsOfNeurons) {}

		virtual void train(int cycles) override;
		virtual std::string propagate(int* inputVector, int length) override;
	};

}