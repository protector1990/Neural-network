#pragma once
#include "Repository.h"

namespace MFNeuralNetwork {
	namespace Data {
		class Job;
		class JobRepository : public Repository {
		private:
			sqlite3_stmt * _updateStatement;
			sqlite3_stmt * _saveStatement;
			sqlite3_stmt * _deleteStatement;
			sqlite3_stmt * _loadAllJobsStatement;
			sqlite3_stmt * _loadUnfinishedJobsStatement;
			Entity * populateFromDataSet(int argc, char **argv, char **azColName) override;
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			void mDelete(Entity* entity) override;
		public:
			std::vector<std::shared_ptr<Job>> loadAllJobs();
			std::vector<std::shared_ptr<Job>> loadUnfinishedJobs();

			JobRepository(sqlite3* db);
		};
	}
}