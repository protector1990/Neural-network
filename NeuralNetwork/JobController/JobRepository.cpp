#include "JobRepository.h"

using namespace std;
using namespace MFNeuralNetwork::Data;

JobRepository::JobRepository(sqlite3 * db) :
	Repository(db, typeid(Job).hash_code())
{
	char* zsql = new char[1024];
	strcpy(zsql, "INSERT INTO job VALUES (id = ?);");
	char* tail = zsql + 33;
	sqlite3_prepare_v2(_db, zsql, 1024, &_saveStatement, &tail);
	strcpy(zsql, "UPDATE job SET id = ? WHERE job.id = ?;");
	tail = zsql + 39;
	sqlite3_prepare_v2(_db, zsql, 1024, &_updateStatement, &tail);
	strcpy(zsql, "DELETE FROM job WHERE job.id = ?;");
	tail = zsql + 34;
	sqlite3_prepare_v2(_db, zsql, 1024, &_deleteStatement, &tail);

}