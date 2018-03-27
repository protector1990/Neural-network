#pragma once
#include "Repository.h"
#include "Job.h"
#include "JobExecution.h"

namespace MFNeuralNetwork {
	namespace Data {
		//class JobExecution;
		class JobExecutionsRepository : public Repository {
		private:
			sqlite3_stmt * _getAllJobExecsForJobStatement;
			sqlite3_stmt * _getUnfinishedJobExecsForJobStatement;
			sqlite3_stmt * _saveStatement;
			sqlite3_stmt * _updateStatement;
			sqlite3_stmt * _deleteStatement;
			Entity* populateFromPreparedStatement(sqlite3_stmt* s) override;
			static int getMaxIdCallback(void* t, int num, char** values, char** names);
			Entity * populateFromPreparedStatement(sqlite3_stmt* s) override;
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			void mDelete(Entity* entity) override;
		public:
			std::vector <std::shared_ptr<JobExecution>> getJobExecutionsForJob(std::weak_ptr<Job> job);
			std::vector <std::shared_ptr<JobExecution>> getUnfinishedJobExecutionsForJob(std::weak_ptr<Job> job);
			JobExecutionsRepository(sqlite3* db);
		};
	}
}