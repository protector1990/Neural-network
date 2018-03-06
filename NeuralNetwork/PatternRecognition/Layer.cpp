#include "Layer.h"
#include "Neuron.h"

using namespace neural;

Layer::Layer(int numNeurons, Layer * previousLayer) : numOf(numNeurons)
{
	neurons = new Neuron*[numNeurons];
	for (int i = 0; i < numNeurons; i++) {
		neurons[i] = new Neuron(previousLayer);
	}
}

int Layer::output() {
	int ans = 0;
	float best = -1.1;
	for (int i = 0; i < numOf; i++) {
		if (neurons[i]->getOutput() > best) {
			best = neurons[i]->getOutput();
			ans = i;
		}
	}

	return ans;
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