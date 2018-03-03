#include "NeuralNetwork.h"
#include <random>
#include <iostream>
#include "NeuralNetwork.h"

namespace MFNeuralNetwork {

	void NeuralNetwork::train(DataSet& dataSet)
	{
		Layer& outputLayer = _layers[_numOfLayers - 1];

		if (dataSet.getNumOfInputs() != _layers[0]._numOf || dataSet.getNumOfOutputs() != outputLayer._numOf) {
			throw std::exception("Incorrect dataset.");
		}

		for (size_t i = 0; i < dataSet.getNumOfDataPoints(); ++i) {
			output(dataSet.getInputDataPoint(i));
			outputLayer.setErrors(dataSet.getExptectedResult(i));
			for (size_t layerIndex = _numOfLayers - 1; layerIndex > 0; --layerIndex) {
				_layers[layerIndex].train(_learningRate);
			}
		}
	}

	int NeuralNetwork::output(float* input) const
	{
		_lock->lock();
		_layers[0].input(input);
		for (size_t i = 1; i < _numOfLayers; ++i) {
			_layers[i].respond();
		}

		int ret = _layers[_numOfLayers - 1].output();
		_lock->unlock();
		return ret;
	}
	size_t NeuralNetwork::getNumberOfInputs()
	{
		return _layers[0]._numOf;
	}
	size_t NeuralNetwork::getNumberOfOutputs()
	{
		return _layers[_numOfLayers - 1]._numOf;
	}
	inline Layer * NeuralNetwork::getLayers()
	{
		return _layers;
	}
}