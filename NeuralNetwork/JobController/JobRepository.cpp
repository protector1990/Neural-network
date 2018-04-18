#include "JobRepository.h"
#include "Job.h"
#include "JobExecution.h"
#include "JobExecutionRepository.h"
#include <string>

using namespace std;
using namespace MFNeuralNetwork::Data;

Entity * MFNeuralNetwork::Data::JobRepository::populateFromPreparedStatement(sqlite3_stmt * s)
{
	Job* ret = new Job();
	ret->_id = sqlite3_column_int64(s, 1);
	return ret;
}

void MFNeuralNetwork::Data::JobRepository::save(Entity * entity)
{
	Job* job = (Job*)entity;
	sqlite3_bind_int64(_saveStatement, 1, job->_id);
	sqlite3_step(_saveStatement);
	sqlite3_reset(_saveStatement);
}

void MFNeuralNetwork::Data::JobRepository::update(Entity * entity)
{
	Job* job = (Job*)entity;
	sqlite3_bind_int64(_updateStatement, 1, job->_id);
	sqlite3_step(_updateStatement);
	sqlite3_reset(_updateStatement);
}

void MFNeuralNetwork::Data::JobRepository::mDelete(Entity * entity)
{
	Job* job = (Job*)entity;
	sqlite3_bind_int64(_deleteStatement, 1, job->_id);
	sqlite3_step(_deleteStatement);
	sqlite3_reset(_deleteStatement);
	detachFromContext(entity);
}

int MFNeuralNetwork::Data::JobRepository::getMaxIdCallback(void* t, int num, char** values, char** names)
{
	JobRepository* instance = (JobRepository*)t;
	instance->_lastIndex = stoll({ values[0] });
	return 0;
}

std::vector<Job*> MFNeuralNetwork::Data::JobRepository::loadAllJobs()
{
	return PreparedStatementResultGetter<Job>::getResultFromPreparedStatement(_loadAllJobsStatement, this);
}

std::vector<Job*> MFNeuralNetwork::Data::JobRepository::getUnfinishedJobs()
{
	return PreparedStatementResultGetter<Job>::getResultFromPreparedStatement(_loadUnfinishedJobsStatement, this);
}

//Entity* MFNeuralNetwork::Data::JobRepository::createNewEntity()
//{
//	return Entity*();
//}

JobRepository* JobRepository::_instance = nullptr;

JobRepository::JobRepository(sqlite3 * db) :
	Repository(db, typeid(Job).hash_code())
{
	char zsql[1024];
	strcpy(zsql, "INSERT INTO job VALUES (id = ?);");
	char* tail = zsql + 33;
	sqlite3_prepare_v2(_db, zsql, 1024, &_saveStatement, &tail);
	strcpy(zsql, "UPDATE job SET id = ? WHERE job.id = ?;");
	tail = zsql + 39;
	sqlite3_prepare_v2(_db, zsql, 1024, &_updateStatement, &tail);
	strcpy(zsql, "DELETE FROM job WHERE job.id = ?;");
	tail = zsql + 34;
	sqlite3_prepare_v2(_db, zsql, 1024, &_deleteStatement, &tail);
	sprintf(zsql, "SELECT * FROM job WHERE job.id IN (SELECT id FROM job_executions WHERE job_executions.status = %d);", IN_PROGRESS);
	tail = zsql + 99;
	sqlite3_prepare_v2(_db, zsql, 1024, &_loadUnfinishedJobsStatement, &tail);
	sprintf(zsql, "SELECT * FROM job;");
	tail = zsql + 18;
	sqlite3_prepare_v2(_db, zsql, 1024, &_loadAllJobsStatement, &tail);
	sprintf(zsql, "SELECT * FROM job WHERE job.id = ?;");
	tail = zsql + 35;
	sqlite3_prepare_v2(_db, zsql, 1024, &_getByIdStatement, &tail);
	sqlite3_exec(db, "SELECT MAX(id) FROM job;", JobRepository::getMaxIdCallback, this, 0);
}