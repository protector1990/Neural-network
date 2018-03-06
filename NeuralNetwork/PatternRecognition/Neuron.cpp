#include "Neuron.h"
#include "Layer.h"
#include <random>
#include <cmath>

using namespace neural;

void Neuron::train()
{
	float delta = (1.0 - output) * (1.0 + output) * error * LEARNING_RATE;

	for (int i = 0; i < numPrev; i++) {
		previous[i]->error += weights[i] * error;
		weights[i] += previous[i]->output * delta;
	}
}

Neuron::Neuron(Layer * prevLayer) : output(0.0), error(0.0)
{
	if (prevLayer) {
		previous = new Neuron*[prevLayer->numOf];
		weights = new float[prevLayer->numOf];

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_real_distribution<float> dis(-1.0, 1.0);

		for (int i = 0; i < prevLayer->numOf; i++) {
			previous[i] = prevLayer->neurons[i];
			weights[i] = dis(gen);
		}

		numPrev = prevLayer->numOf;
	}
	else {
		previous = nullptr;
		weights = nullptr;
		numPrev = 0;
	}

	output = 0;
}

void Neuron::respond()
{
	float sum = 0.0;
	for (int i = 0; i < numPrev; i++)
		sum += weights[i] * previous[i]->output;

	output = sum / (1 + abs(sum));//faster, but less precise than a sigmoid function
	
	error = 0;
}