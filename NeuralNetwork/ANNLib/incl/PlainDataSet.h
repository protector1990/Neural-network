#pragma once
#include "DataSet.h"

namespace MFNeuralNetwork {
	struct PlainDataSet : DataSet {
	protected:
		float* _inputs;
		float* _expectedOutput;
	public:
		PlainDataSet(size_t numOfDataPoints, size_t numOfInputs, size_t numOfOutputs);
		~PlainDataSet();
		virtual float* getInputDataPoint(size_t index) override;
		virtual float* getExptectedResult(size_t index) override;
		inline void setInputDataPoint(float* value, size_t index);
		inline void setExpectedResult(float* value, size_t index);
	};
}