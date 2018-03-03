#pragma once
#include "Layer.h"
#include <stdlib.h>
#include <mutex>

namespace MFNeuralNetwork {

	struct DataSet {
	private:
		size_t _numOfInputs;
		size_t _numOfOutputs;
		size_t _numOfDataPoints;
		float* _inputs;
		float* _expectedOutput;
	public:
		DataSet(size_t numOfDataPoints, size_t numOfInputs, size_t numOfOutputs) : 
			_numOfDataPoints(numOfDataPoints),
			_numOfInputs(numOfInputs),
			_numOfOutputs(numOfOutputs)
		{
			_inputs = new float[numOfDataPoints * numOfInputs];
			_expectedOutput = new float[numOfDataPoints * numOfOutputs]{};
		}
		~DataSet() {
			delete[] _inputs;
			delete[] _expectedOutput;
		}
		inline size_t getNumOfDataPoints() {
			return _numOfDataPoints;
		}
		inline size_t getNumOfInputs() {
			return _numOfInputs;
		}
		inline size_t getNumOfOutputs() {
			return _numOfOutputs;
		}
		inline float* getInputDataPoint(size_t index) {
			return _inputs + index * _numOfInputs;
		}
		inline float* getExptectedResult(size_t index) {
			return _expectedOutput + index * _numOfOutputs;
		}
		inline void setInputDataPoint(float* value, size_t index) {
			memcpy(_inputs + index * _numOfInputs, value, _numOfInputs);
		}
		inline void setExpectedResult(float* value, size_t index) {
			memcpy(_expectedOutput + index * _numOfOutputs, value, _numOfOutputs);
		}
	};

	//consider using chars instead of ints for inputs!

	class NeuralNetwork {
		friend class NetworkLoader;
	private:
		Layer * _layers;
		size_t _numOfLayers;
		float _learningRate = LEARNING_RATE;
		std::mutex* _lock;//for some reasons unattainable, mutex cannot be a member, since some strange errors occur then
		NeuralNetwork(size_t numOfLayers) : _numOfLayers(numOfLayers) {
			_lock = new std::mutex;
			_layers = (Layer*)malloc(numOfLayers * sizeof(Layer));
		}
	public:
		
		~NeuralNetwork() {
			delete[] _layers;
			delete _lock;
		}

		inline Layer* getLayers();

		virtual void train(DataSet& dataSet);
		virtual int output(float* input) const;

		size_t getNumberOfInputs();
		size_t getNumberOfOutputs();
	};
}