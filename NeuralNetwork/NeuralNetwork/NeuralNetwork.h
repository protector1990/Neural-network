#pragma once
#include "Layer.h"
#include <cstdlib>
#include <mutex>
#include "DataSet.h"
#include <vector>

namespace MFNeuralNetwork {
	//consider using chars instead of ints for inputs!

	class NeuralNetwork {
		friend class NetworkLoader;
	private:
		std::vector<Layer*> _layers;
		size_t _numOfLayers;
		float _learningRate = LEARNING_RATE;
		std::mutex* _lock;//for some reasons unattainable, mutex cannot be a member, since some strange errors occur then
		NeuralNetwork(size_t numOfLayers) : _numOfLayers(numOfLayers) {
			_lock = new std::mutex;
		}
	public:
		
		~NeuralNetwork() {
			for (size_t i = 0; i < _numOfLayers; ++i) {
				delete _layers[i];
			}
			delete _lock;
		}

		std::vector<Layer*> getLayers();

		virtual void train(DataSet & dataSet, void (*progressCallback)(size_t) = nullptr);
		virtual int output(float* input) const;
		std::unique_ptr<float[]> getOutputs();

		size_t getNumberOfInputs();
		size_t getNumberOfOutputs();
	};
}