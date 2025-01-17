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
			JobRepository(sqlite3* db);
			static Repository* createNewInstance(sqlite3* db);
			//static int getMaxIdCallback(void* t, int num, char** values, char** names);
		public:
			std::vector<Job*> loadAllJobs();
			std::vector<Job*> getUnfinishedJobs();
			//Entity* createNewEntity() override;
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			void mDelete(Entity* entity) override;
		};
	}
}