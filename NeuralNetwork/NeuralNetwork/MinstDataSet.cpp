#include "MinstDataSet.h"
#include <iostream>
#include <cmath>

using namespace std;

namespace MFNeuralNetwork {
	void swapBytes(char* val, int n) {
		for (int i = 0; i < n / 2; ++i) {
			char temp = val[i];
			val[i] = val[n - i - 1];
			val[n - i - 1] = temp;
		}
	}

	bool is_big_endian(void)
	{
		union {
			uint32_t i;
			char c[4];
		} bint = { 0x01020304 };

		return bint.c[0] == 1;
	}

	int getInt(ifstream& in) {
		char bytes[4];
		in.read(bytes, 4);
		if (is_big_endian) {
			swapBytes(bytes, 4);
		}
		return *(reinterpret_cast<int*>(bytes));
	}

	void MinstDataSet::loadPartition(size_t partitionIndex)
	{
		static const int imagesOffset = 16; // as per MINST specification
		static const int labelsOffset = 8;
		if (partitionIndex == _currentPartition) return;
		size_t imagesPartitionOffset = imagesOffset + partitionIndex * _numOfInputs * _partitionSize;
		size_t labelsPartitionOffset = labelsOffset + partitionIndex * _partitionSize;
		_imagesIn.seekg(imagesPartitionOffset, ios::beg);
		_labelsIn.seekg(labelsPartitionOffset, ios::beg);
		char p;
		for (size_t pixelIter = 0; pixelIter < _partitionSize * _numOfInputs; ++pixelIter) {
			_imagesIn.read(&p, 1);
			unsigned char p1 = p;
			_inputs[pixelIter] = p1 / 255.f;
		}
		for (size_t labelIter = 0; labelIter < _partitionSize; ++labelIter) {
			_labelsIn.read(&p, 1);
			for (int outputsIter = 0; outputsIter < _numOfOutputs; ++outputsIter) {
				if (outputsIter == p) {
					_expectedOutput[labelIter * _numOfOutputs + outputsIter] = 1;
				}
				else {
					_expectedOutput[labelIter * _numOfOutputs + outputsIter] = 0;
				}
			}
		}
		_currentPartition = partitionIndex;
	}
	MinstDataSet::MinstDataSet(size_t partitionSize, std::string imagesPath, std::string labelsPath)
	{
		_imagesIn.open(imagesPath, std::ios_base::binary);
		_labelsIn.open(labelsPath, std::ios_base::binary);
		if (getInt(_imagesIn) != 2051 || getInt(_labelsIn) != 2049) {
			throw std::exception("Minst dataset not in correct format");
		}
		_numOfDataPoints = getInt(_imagesIn);
		if (_numOfDataPoints != getInt(_labelsIn)) {
			throw std::exception("Images and labels files not matching");
		}
		_numOfInputs = getInt(_imagesIn) * getInt(_imagesIn);
		_numOfOutputs = 10;
		_partitionSize = partitionSize;
		_numOfPartitions = ceilf((float)_numOfDataPoints / _partitionSize);
		_inputs = new float[partitionSize * _numOfInputs];
		_expectedOutput = new float[partitionSize * _numOfOutputs];

		loadPartition(0);
	}
}