#pragma once
#include "Repository.h"
#include "Entity.h"
#include <vector>
#include "JobFragment.h"
#include "JobRepository.h"

#define WEAK_JOB_PTR(x) std::weak_ptr<Job>(std::shared_ptr<Job>(x))

namespace MFNeuralNetwork {
	namespace Data {
		class Job : public Entity {
			friend class MFNeuralNetwork::Data::JobRepository;
			//friend Entity * MFNeuralNetwork::Data::JobRepository::populateFromPreparedStatement(sqlite3_stmt * s);
			//class JobFragment;
			class JobExecution;
		private:
			Job() {}
			vector<std::shared_ptr<JobFragment>> _jobFragments;
			vector<std::shared_ptr<JobExecution>> _jobExecutions;
		public:
			//void setId(long long id);
			void addJobFragment(std::shared_ptr<JobFragment> jobFragment);
			void addJobExecution(std::shared_ptr<JobExecution> jobExecution);
			void releaseFinishedExecutions();
			~Job();
		};
	}

}