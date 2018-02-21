#include "Layer.h"
#include "Neuron.h"

Layer::Layer(int numNeurons, Layer * previousLayer) : numOf(numNeurons)
{
	neurons = new Neuron*[numNeurons];
	for (int i = 0; i < numNeurons; i++) {
		neurons[i] = new Neuron(previousLayer);
	}
}

void Layer::respond()
{
	for (int i = 0; i < numOf; i++)
		neurons[i]->respond();
}

void Layer::setError(int input)
{
	for (int i = 0; i < numOf; i++)
		neurons[i]->setError(i == input ? +1.0 : -1.0);
}

void Layer::train()
{
	for (int i = 0; i < numOf; i++)
		neurons[i]->train();
}

void Layer::input(int number)
{
	for (int i = numOf - 1; i >= 0; i--) {
		neurons[i]->output = number % 2;
		number /= 2;
	}
}

int Layer::output()
{
	int ans = 0;
	float best = -1.1;
	for (int i = numOf - 1; i >= 0; i--) {
		if (neurons[i]->output > best) {
			best = neurons[i]->output;
			ans = i;
		}
	}

	return ans;
}