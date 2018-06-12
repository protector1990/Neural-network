#pragma once
#include <vector>
#include "Entity.h"

namespace MFNeuralNetwork {
	namespace Data {
		class JobFragment;
		class JobExecution;
		class JobRepository;
		class Job : public Entity {
			friend class JobRepository;
			//friend Entity * MFNeuralNetwork::Data::JobRepository::populateFromPreparedStatement(sqlite3_stmt * s);
			//class JobFragment;
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