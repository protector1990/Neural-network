#pragma once
#include "DataSet.h"

namespace MFNeuralNetwork {
	struct PartitionededDataSet : DataSet {
	protected:
		size_t _partitionSize;
		size_t _currentPartition = -1;
		size_t _numOfPartitions;
		float* _inputs;
		float* _expectedOutput;
		virtual void loadPartition(size_t partitionIndex) = 0;
		PartitionededDataSet() {}
	public:
		PartitionededDataSet(size_t numOfDataPoints, size_t numOfInputs, size_t numOfOutputs, size_t partitionSize);
		virtual float* getInputDataPoint(size_t index) override;
		virtual float* getExptectedResult(size_t index) override;
	};
}