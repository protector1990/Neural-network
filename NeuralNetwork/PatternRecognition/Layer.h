#pragma once
#include "Neuron.h"

namespace neural {

	class Layer {
	protected:
		friend class Neuron;
		int numOf;
		Neuron ** neurons;

	public:
		template <typename Input> void input(Input* inputVector, int length);
		int output();
		void respond();
		void setError(int input);
		void train();

		Layer(int numNeurons, Layer * previousLayer = nullptr);
		virtual ~Layer() { for (int i = 0; i < numOf; i++) delete neurons[i]; delete[] neurons; }
	};

	template<typename Input>
	inline void Layer::input(Input* inputVector, int length)
	{
		for (int i = 0; i < length; i++)
			neurons[i]->setOutput(static_cast<float>(inputVector[i]));
	}

}