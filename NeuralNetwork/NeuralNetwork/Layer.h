#pragma once
#include "Neuron.h"

class Layer {
private:
	friend class Neuron;
	friend class BinNumNetwork;
	int numOf;
	Neuron ** neurons;

	void input(int number);
	int output();
public:
	Layer(int numNeurons, Layer * previousLayer = nullptr);
	~Layer() { for (int i = 0; i < numOf; i++) delete neurons[i]; delete[] neurons; }

	void respond();
	void setError(int input);
	void train();
};