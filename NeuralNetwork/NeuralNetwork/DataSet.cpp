#include "DataSet.h"

namespace MFNeuralNetwork {
	DataSet::DataSet(size_t numOfDataPoints, size_t numOfInputs, size_t numOfOutputs) :
		_numOfDataPoints(numOfDataPoints),
		_numOfInputs(numOfInputs),
		_numOfOutputs(numOfOutputs)
	{}
}