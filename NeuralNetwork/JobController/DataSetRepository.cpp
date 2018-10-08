#include "DataSetRepository.h"

namespace MFNeuralNetwork {
	namespace Data {

		using namespace std;
		int DataSetRepository::getMaxIdCallback(void * t, int num, char ** values, char ** names)
		{
			DataSetRepository* instance = (DataSetRepository*)t;
			instance->_lastIndex = stoll({ values[0] });
			return 0;
		}
		Entity * DataSetRepository::populateFromPreparedStatement(sqlite3_stmt * s)
		{
			DataSet* ret = new DataSet();
			ret->_id = sqlite3_column_int64(s, 1);
			const unsigned char* ch = sqlite3_column_text(s, 2);
			ret->_name = string((const char*)ch);
			ch = sqlite3_column_text(s, 3);
			ret->_path = string((const char*)ch);
			ret->_saved = true;
			return ret;
		}
		DataSetRepository::DataSetRepository(sqlite3 * db)
			: Repository(db, typeid(DataSet).hash_code())
		{
			char zsql[1024];

			strcpy(zsql, "INSERT INTO data_set VALUES (?, ?, ?);");
			char* tail = zsql + 39;
			sqlite3_prepare_v2(_db, zsql, 1024, &_saveStatement, (const char**)const_cast<const char **>(&tail));

			strcpy(zsql, "UPDATE data_set SET name = ?, path = ? WHERE data_set.id = ?;");
			tail = zsql + 69;
			sqlite3_prepare_v2(_db, zsql, 1024, &_updateStatement, (const char**)const_cast<const char **>(&tail));

			strcpy(zsql, "DELETE FROM data_set WHERE data_set.id = ?;");
			tail = zsql + 43;
			sqlite3_prepare_v2(_db, zsql, 1024, &_deleteStatement, (const char**)const_cast<const char **>(&tail));
			
			sprintf(zsql, "SELECT * FROM data_set;");
			tail = zsql + 23;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getAllStatement, (const char**)const_cast<const char **>(&tail));

			sprintf(zsql, "SELECT * FROM data_set WHERE data_set.name = ?;");
			tail = zsql + 47;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getByNameStatement, (const char**)const_cast<const char **>(&tail));

			sprintf(zsql, "SELECT * FROM data_set WHERE data_set.id = ?;");
			tail = zsql + 45;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getByIdStatement, (const char**)const_cast<const char **>(&tail));
			
			sqlite3_exec(db, "SELECT MAX(id) FROM data_set;", DataSetRepository::getMaxIdCallback, this, 0);
		}
		Repository * DataSetRepository::createNewInstance(sqlite3 * db)
		{
			return new DataSetRepository(db);
		}
		void DataSetRepository::mDelete(Entity * entity)
		{
			DataSet* dataSet = (DataSet*)entity;
			sqlite3_bind_int64(_deleteStatement, 1, dataSet->_id);
			sqlite3_step(_deleteStatement);
			sqlite3_reset(_deleteStatement);
			detachFromContext(entity);
		}
		void DataSetRepository::save(Entity * entity)
		{
			DataSet* dataSet = (DataSet*)entity;
			sqlite3_bind_int64(_saveStatement, 1, dataSet->_id);
			sqlite3_bind_text(_saveStatement, 2, dataSet->_name.c_str(), dataSet->_name.size(), SQLITE_STATIC/*Not really static, but ok*/);
			sqlite3_bind_text(_saveStatement, 3, dataSet->_path.c_str(), dataSet->_path.size(), SQLITE_STATIC/*Not really static, but ok*/);
			sqlite3_step(_saveStatement);
			sqlite3_reset(_saveStatement);
		}

		void DataSetRepository::update(Entity * entity)
		{
			DataSet* dataSet = (DataSet*)entity;
			sqlite3_bind_text(_updateStatement, 1, dataSet->_name.c_str(), dataSet->_name.size(), SQLITE_STATIC/*Not really static, but ok*/);
			sqlite3_bind_text(_updateStatement, 2, dataSet->_path.c_str(), dataSet->_path.size(), SQLITE_STATIC/*Not really static, but ok*/);
			sqlite3_bind_int64(_updateStatement, 3, dataSet->_id);
			sqlite3_step(_updateStatement);
			sqlite3_reset(_updateStatement);
		}
	}
}