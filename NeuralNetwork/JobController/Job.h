#pragma once
#include "Repository.h"
#include "Entity.h"
#include <vector>
#include "JobFragment.h"
#include "JobRepository.h"

namespace MFNeuralNetwork {
	namespace Data {
		class Job : public Entity {
			friend class MFNeuralNetwork::Data::JobRepository;
			//friend Entity * MFNeuralNetwork::Data::JobRepository::populateFromPreparedStatement(sqlite3_stmt * s);
			//class JobFragment;
			class JobExecution;
		private:
			Job() {}
			std::vector<JobFragment*> _jobFragments;
			std::vector<JobExecution*> _jobExecutions;
		public:
			//void setId(long long id);
			void addJobFragment(JobFragment* jobFragment);
			void addJobExecution(JobExecution* jobExecution);
			std::vector<JobFragment*> getJobFragments();
			std::vector<JobFragment*> getJobExecutions();
			void releaseFinishedExecutions();
			~Job();
		};
	}

}