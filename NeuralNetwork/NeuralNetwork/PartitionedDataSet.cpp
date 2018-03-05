#include "PartitionedDataSet.h"
#include <exception>

namespace MFNeuralNetwork {
	PartitionededDataSet::PartitionededDataSet(size_t numOfDataPoints, size_t numOfInputs, size_t numOfOutputs, size_t partitionSize) :
		DataSet(numOfDataPoints, numOfInputs, numOfOutputs), _partitionSize(partitionSize)
	{
		_inputs = new float[partitionSize * numOfInputs];
		_expectedOutput = new float[partitionSize * numOfOutputs];
	}
	float * PartitionededDataSet::getInputDataPoint(size_t index)
	{
		size_t currPartitionIndex = index % _partitionSize;
		size_t currPartition = index / _partitionSize;
		if (currPartition > _numOfPartitions) {
			throw std::exception("Index out of bounds");
		}
		if (currPartition != _currentPartition) {
			loadPartition(currPartition);
			_currentPartition = currPartition;
		}
		return _inputs + currPartitionIndex * _numOfInputs;
	}
	float * PartitionededDataSet::getExptectedResult(size_t index)
	{
		size_t currPartitionIndex = index % _partitionSize;
		size_t currPartition = index / _partitionSize;
		if (currPartition > _numOfPartitions) {
			throw std::exception("Index out of bounds");
		}
		if (currPartition != _currentPartition) {
			loadPartition(currPartition);
			_currentPartition = currPartition;
		}
		return _expectedOutput + currPartitionIndex * _numOfOutputs;
	}
}