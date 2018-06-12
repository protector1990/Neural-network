#pragma once
#include <vector>
#include "sqlite\sqlite3.h"
#include "Repository.h"

namespace MFNeuralNetwork {
	namespace Data {
		//class JobExecution;
		class Job;
		class Entity;
		class JobExecutionRepository;
		class JobExecution;
		//class Repository;
		class JobExecutionsRepository : public Repository {
		private:
			sqlite3_stmt * _getAllJobExecsForJobStatement;
			sqlite3_stmt * _getUnfinishedJobExecsForJobStatement;
			sqlite3_stmt * _saveStatement;
			sqlite3_stmt * _updateStatement;
			sqlite3_stmt * _deleteStatement;
			static int getMaxIdCallback(void* t, int num, char** values, char** names);
			static JobExecutionsRepository* _instance;
		public:
			Entity * populateFromPreparedStatement(sqlite3_stmt* s) override;
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			void mDelete(Entity* entity) override;
			std::vector <JobExecution*> getAllForJob(Job* job);
			std::vector <JobExecution*> getUnfinishedForJob(Job* job);
			JobExecutionsRepository(sqlite3* db);
			static JobExecutionsRepository* getInstance();
		};
	}
}