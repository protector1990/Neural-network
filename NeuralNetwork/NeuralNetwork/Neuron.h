#pragma once

const float LEARNING_RATE = 0.015;//define as needed

class Neuron {
	friend class Layer;
	int numPrev;
	Neuron ** previous;
	float * weights;
	float output;

	float error;

	void train();
public:
	Neuron(Layer * prevLayer = nullptr);
	~Neuron() { delete[] previous; delete[] weights; }

	void respond();
	void setError(float desiredOutcome);
};