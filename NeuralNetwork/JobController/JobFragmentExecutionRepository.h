#pragma once
#include "Repository.h"
#include "JobFragmentExecution.h"

namespace MFNeuralNetwork {
	namespace Data {
		class JobFragmentExecutionRepository : public Repository {
		private:
			sqlite3_stmt * _getAllJobFragExecsForJobFragStatement;
			sqlite3_stmt * _getAllJobFragExecsForJobFragExecStatement;
			sqlite3_stmt * _getUnfinishedJobFragExecsForJobStatement;
			sqlite3_stmt * _saveStatement;
			sqlite3_stmt * _updateStatement;
			sqlite3_stmt * _deleteStatement;
			Entity* populateFromPreparedStatement(sqlite3_stmt* s) override;
			static int getMaxIdCallback(void* t, int num, char** values, char** names);
			static JobFragmentExecutionRepository* _instance;
			JobFragmentExecutionRepository(sqlite3* db);
		public:
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			void mDelete(Entity* entity) override;
			std::vector <JobFragmentExecution*> getAllForJobFrag(JobFragment* job);
			std::vector <JobFragmentExecution*> getUnfinishedForJobFrag(JobFragment* job);
		};
	}
}