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
			Entity * populateFromPreparedStatement(sqlite3_stmt* s) override;
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			void mDelete(Entity* entity) override;
			static JobRepository* _instance;
			static int getMaxIdCallback(void* t, int num, char** values, char** names);
		public:
			std::vector<std::shared_ptr<Job>> loadAllJobs();
			std::vector<std::shared_ptr<Job>> getUnfinishedJobs();
			//std::shared_ptr<Entity> createNewEntity() override;

			JobRepository(sqlite3* db);
		};
	}
}