#include "PatternNetwork.h"

using namespace neural;

void PatternNetwork::train(int cycles)
{
	for (int i = 0; i < cycles; i++) {


		//propagate();
		//layers[numOfLayers - 1]->setError();

		for (int i = numOfLayers - 1; i > 0; i++)
			layers[i]->train();
	}
}

std::string PatternNetwork::propagate(int * inputVector, int length)
{
	layers[0]->input(inputVector, length);
	
	for (int i = 0; i < numOfLayers; i++)
		layers[i]->respond();

	switch (layers[numOfLayers - 1]->output())
	{
	case 0:
		return "Cross";
	case 1:
		return "Circle";
	default:
		return "Unknown";
	}
}