#pragma once
#include "JobExecutionRepository.h"

namespace MFNeuralNetwork {
	namespace Data {
		//class JobExecutionRepository;
		class JobExecution : private Entity {
			friend class JobExecutionRepository;
		private:
			long long _id;
			bool isNullIdentity() override;
			JobExecution() {}
		public:
			bool equals(const Entity* other) const override;
		};
	}
}