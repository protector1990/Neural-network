#include "PlainDataSet.h"
#include <memory>

namespace MFNeuralNetwork {
	PlainDataSet::PlainDataSet(size_t numOfDataPoints, size_t numOfInputs, size_t numOfOutputs) :
		DataSet(numOfDataPoints, numOfInputs, numOfOutputs)
	{
		_inputs = new float[numOfDataPoints * numOfInputs];
		_expectedOutput = new float[numOfDataPoints * numOfOutputs]{};
	}
	PlainDataSet::~PlainDataSet()
	{
		delete[] _inputs;
		delete[] _expectedOutput;
	}
	float * PlainDataSet::getInputDataPoint(size_t index)
	{
		return _inputs + index * _numOfInputs;
	}
	float * PlainDataSet::getExptectedResult(size_t index)
	{
		return _expectedOutput + index * _numOfOutputs;
	}
	inline void PlainDataSet::setInputDataPoint(float * value, size_t index)
	{
		memcpy(_inputs + index * _numOfInputs, value, _numOfInputs);
	}
	inline void PlainDataSet::setExpectedResult(float * value, size_t index)
	{
		memcpy(_expectedOutput + index * _numOfOutputs, value, _numOfOutputs);
	}
}