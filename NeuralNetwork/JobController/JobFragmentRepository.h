#pragma once

#include "Repository.h"
#include "JobFragment.h"

namespace MFNeuralNetwork {
	namespace Data {
		class JobFragmentRepository : public Repository {
		private:
			sqlite3_stmt * _getAllJobFragmentsForJobStatement;
			sqlite3_stmt * _saveStatement;
			sqlite3_stmt * _updateStatement;
			sqlite3_stmt * _deleteStatement;
			Entity* populateFromPreparedStatement(sqlite3_stmt* s) override;
			static int getMaxIdCallback(void* t, int num, char** values, char** names);
			static JobFragmentRepository* _instance;
		public:
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			void mDelete(Entity* entity) override;
			std::vector <std::shared_ptr<JobFragment>> getJobFragmentsForJob(Job* job);
			JobFragmentRepository(sqlite3* db);
			static JobFragmentRepository* getInstance();
		};
	}
}