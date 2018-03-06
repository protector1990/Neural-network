#include "NeuralNetwork.h"
#include <random>
#include <iostream>
#include "NeuralNetwork.h"

namespace MFNeuralNetwork {

	void NeuralNetwork::train(DataSet& dataSet, void(*progressCallback)(size_t))
	{
		Layer& outputLayer = *_layers[_numOfLayers - 1];

		if (dataSet.getNumOfInputs() != _layers[0]->_numOf || dataSet.getNumOfOutputs() != outputLayer._numOf) {
			throw std::exception("Incorrect dataset.");
		}

		for (size_t i = 0; i < dataSet.getNumOfDataPoints(); ++i) {
			output(dataSet.getInputDataPoint(i));
			outputLayer.setErrors(dataSet.getExptectedResult(i));
			for (size_t layerIndex = _numOfLayers - 1; layerIndex > 0; --layerIndex) {
				_layers[layerIndex]->train(_learningRate);
			}
			if (progressCallback) {
				if (i % 100 == 0) {
					progressCallback(i);
				}
			}
		}
	}

	int NeuralNetwork::output(float* input) const
	{
		_lock->lock();
		_layers[0]->input(input);
		for (size_t i = 1; i < _numOfLayers; ++i) {
			_layers[i]->respond();
		}

		int ret = _layers[_numOfLayers - 1]->output();
		_lock->unlock();
		return ret;
	}
	std::unique_ptr<float[]> NeuralNetwork::getOutputs()
	{
		return _layers[_numOfLayers - 1]->outputSet();
	}
	size_t NeuralNetwork::getNumberOfInputs()
	{
		return _layers[0]->_numOf;
	}
	size_t NeuralNetwork::getNumberOfOutputs()
	{
		return _layers[_numOfLayers - 1]->_numOf;
	}
	std::vector<Layer*> NeuralNetwork::getLayers()
	{
		return _layers;
	}
}