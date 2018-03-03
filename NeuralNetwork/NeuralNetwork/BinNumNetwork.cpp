#include "BinNumNetwork.h"
#include <random>
#include <iostream>

namespace MFNeuralNetwork {

	void BinNumNetwork::train(int percent)
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, 255);

		int correct, prevCorrect = 0;

		while (true) {
			correct = 0;

			for (int i = 0; i < 500; i++) {
				int randomNumber = dis(gen);
				output(randomNumber);

				if (outputLayer->output() == randomNumber)
					correct++;

				outputLayer->setError(randomNumber);
				outputLayer->train();
				hiddenLayer->train();
			}

			std::cout << correct << std::endl;//debug

			if (correct >= percent) {
				if (prevCorrect > 2)
					break;

				prevCorrect++;
			}
			else
				prevCorrect = 0;
		}

		for (int i = 0; i < 64; i++) {
			output(i);
			if (outputLayer->output() != i) {
				std::cout << "Ne moze se prepoznati: " << i << std::endl;//debug
			}
		}
	}

	int BinNumNetwork::output(int input) const
	{
		inputLayer->input(input);
		hiddenLayer->respond();
		outputLayer->respond();

		return outputLayer->output();
	}
}