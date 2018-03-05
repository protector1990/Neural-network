#pragma once

namespace MFNeuralNetwork {

	struct DataSet {
	protected:
		size_t _numOfInputs;
		size_t _numOfOutputs;
		size_t _numOfDataPoints;
		DataSet() {}
	public:
		DataSet(size_t numOfDataPoints, size_t numOfInputs, size_t numOfOutputs);
		inline size_t DataSet::getNumOfDataPoints() const
		{
			return _numOfDataPoints;
		}
		inline size_t DataSet::getNumOfInputs() const
		{
			return _numOfInputs;
		}
		inline size_t DataSet::getNumOfOutputs() const
		{
			return _numOfOutputs;
		}
		virtual float* getInputDataPoint(size_t index) = 0;
		virtual float* getExptectedResult(size_t index) = 0;
	};
}