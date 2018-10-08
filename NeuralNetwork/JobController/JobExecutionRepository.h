#ifndef JOB_EXECUTION_REPOSITORY_
#define JOB_EXECUTION_REPOSITORY_
#include <vector>
#include "sqlite\sqlite3.h"
#include "Repository.h"

namespace MFNeuralNetwork {
	namespace Data {
		class Job;
		class Entity;
		class JobExecution;
		class JobExecutionsRepository : public Repository {
		private:
			sqlite3_stmt * _getAllJobExecsForJobStatement;
			sqlite3_stmt * _getUnfinishedJobExecsForJobStatement;
			sqlite3_stmt * _saveStatement;
			sqlite3_stmt * _updateStatement;
			sqlite3_stmt * _deleteStatement;
			JobExecutionsRepository(sqlite3* db);
			static Repository* createNewInstance(sqlite3* db);
		public:
			Entity * populateFromPreparedStatement(sqlite3_stmt* s) override;
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			void mDelete(Entity* entity) override;
			std::vector <JobExecution*> getAllForJob(Job* job);
			std::vector <JobExecution*> getUnfinishedForJob(Job* job);
		};
	}
}
#endif