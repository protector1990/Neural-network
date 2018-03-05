#pragma once
#include "PartitionedDataSet.h"
#include <fstream>

namespace MFNeuralNetwork {
	struct MinstDataSet : PartitionededDataSet {
	private:
		std::ifstream _imagesIn;
		std::ifstream _labelsIn;
		void loadPartition(size_t partitionIndex) override;
	public:
		MinstDataSet(size_t partitionSize, std::string imagesPath, std::string labelsPath);
	};
}