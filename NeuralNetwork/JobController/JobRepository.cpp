#include <string>
#include "JobExecutionRepository.h"
#include "JobRepository.h"
#include "Job.h"
#include "JobExecution.h"

using namespace std;
using namespace MFNeuralNetwork::Data;

Entity * MFNeuralNetwork::Data::JobRepository::populateFromPreparedStatement(sqlite3_stmt * s)
{
	Job* ret = new Job();
	ret->_id = sqlite3_column_int64(s, 0);
	return ret;
}

void MFNeuralNetwork::Data::JobRepository::save(Entity * entity)
{
	Job* job = (Job*)entity;
	sqlite3_bind_int64(_saveStatement, 1, job->_id);
	sqlite3_step(_saveStatement);
	sqlite3_reset(_saveStatement);
	JobExecutionsRepository* jobExecutionsRepository = getInstance<JobExecutionsRepository>(_db);
	for (auto jobExecution : job->_jobExecutions) {
		jobExecutionsRepository->save(jobExecution);
	}
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

std::vector<Job*> MFNeuralNetwork::Data::JobRepository::loadAllJobs()
{
	auto jobs = PreparedStatementResultGetter<Job>::getResultFromPreparedStatement(_loadAllJobsStatement, this);
	JobExecutionsRepository* jobExecutionsRepository = getInstance<JobExecutionsRepository>(_db);
	for (auto job : jobs) {
		job->_jobExecutions = jobExecutionsRepository->getAllForJob(job);
	}
	return jobs;
}

std::vector<Job*> MFNeuralNetwork::Data::JobRepository::getUnfinishedJobs()
{
	return PreparedStatementResultGetter<Job>::getResultFromPreparedStatement(_loadUnfinishedJobsStatement, this);
}

Repository * JobRepository::createNewInstance(sqlite3 * db)
{
	return new JobRepository(db);
}

JobRepository::JobRepository(sqlite3 * db) :
	Repository(db, typeid(Job).hash_code())
{
	char zsql[1024];
	strcpy(zsql, "INSERT INTO job (id) VALUES (?);");
	char* tail = zsql + 31;
	sqlite3_prepare_v2(_db, zsql, 1024, &_saveStatement, const_cast<const char **>(&tail));
	strcpy(zsql, "UPDATE job SET id = ? WHERE job.id = ?;");
	tail = zsql + 39;
	sqlite3_prepare_v2(_db, zsql, 1024, &_updateStatement, const_cast<const char **>(&tail));
	strcpy(zsql, "DELETE FROM job WHERE job.id = ?;");
	tail = zsql + 34;
	sqlite3_prepare_v2(_db, zsql, 1024, &_deleteStatement, const_cast<const char **>(&tail));
	sprintf(zsql, "SELECT * FROM job WHERE job.id IN (SELECT id FROM job_executions WHERE job_executions.status = %d);", IN_PROGRESS);
	tail = zsql + 99;
	sqlite3_prepare_v2(_db, zsql, 1024, &_loadUnfinishedJobsStatement, const_cast<const char **>(&tail));
	sprintf(zsql, "SELECT * FROM job;");
	tail = zsql + 18;
	int result = sqlite3_prepare_v2(_db, zsql, 1024, &_loadAllJobsStatement, const_cast<const char **>(&tail));
	sprintf(zsql, "SELECT * FROM job WHERE job.id = ?;");
	tail = zsql + 35;
	sqlite3_prepare_v2(_db, zsql, 1024, &_getByIdStatement, const_cast<const char **>(&tail));
	sqlite3_exec(db, "select max(id) from job;", JobRepository::getMaxIdCallback, this, 0);
}