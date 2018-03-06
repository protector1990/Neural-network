#pragma once

namespace neural {

	const float LEARNING_RATE = 0.01;//define as needed

	class Layer;

	class Neuron {
		int numPrev;
		Neuron ** previous;
		float * weights;
		float output;
		float error;

	public:
		void train();
		void respond();
		float getOutput() const { return output; }
		void setOutput(float output) { this->output = output; }
		void setError(float desiredOutcome) { error = desiredOutcome - output; }

		Neuron(Layer * prevLayer = nullptr);
		~Neuron() { delete[] previous; delete[] weights; }
	};

}