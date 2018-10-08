#pragma once
#include "Repository.h"
#include "DataSet.h"
#include "sqlite\sqlite3.h"

namespace MFNeuralNetwork {
	namespace Data {
		class DataSetRepository : public Repository {
		private:
			sqlite3_stmt * _getByNameStatement;
			sqlite3_stmt * _deleteStatement;
			sqlite3_stmt * _saveStatement;
			sqlite3_stmt * _updateStatement;
			sqlite3_stmt * _getAllStatement;
			static int getMaxIdCallback(void* t, int num, char** values, char** names);
			Entity* populateFromPreparedStatement(sqlite3_stmt* s) override;
			DataSetRepository(sqlite3* db);
			static Repository* createNewInstance(sqlite3* db);
		public:
			void mDelete(Entity* entity) override;
			void save(Entity* entity) override;
			void update(Entity* entity) override;
			DataSet* getByName();
			std::vector<DataSet*> getAll();
		};
	}
}