#pragma once
#include "Repository.h"
#include "Job.h"

namespace MFNeuralNetwork {
	namespace Data {
		class JobExecution;
		class JobExecutionsRepository : public Repository {
		private:
			sqlite3_stmt * _getAllJobExecutionsForJob;
			Entity* populateFromPreparedStatement(sqlite3_stmt* s) override;
		public:
			std::vector <std::shared_ptr<JobExecution>> getJobExecutionsForJob(std::weak_ptr<Job> job);
			std::vector <std::shared_ptr<JobExecution>> getUnfinishedJobExecutionsForJob(std::weak_ptr<Job> job);
		};
	}
}