#include <string>
#include "JobExecutionRepository.h"
#include "JobExecution.h"
#include "Job.h"
#include "JobRepository.h"

using namespace std;
namespace MFNeuralNetwork {
	namespace Data {

		using namespace boost::posix_time;

		Entity * JobExecutionsRepository::populateFromPreparedStatement(sqlite3_stmt * s)
		{
			JobExecution* ret = new JobExecution();
			ret->_id = sqlite3_column_int64(s, 0);
			ret->_status = (JobExecutionStatus) sqlite3_column_int(s, 1);
			string startTime((char*) sqlite3_column_text(s, 2));
			ret->_startTime = from_iso_string(startTime);
			string endTime((char*)sqlite3_column_text(s, 3));
			ret->_endTime = from_iso_string(endTime);
			long long jobId = sqlite3_column_int64(s, 4);
			ret->setJob((Job*)getInstance<JobRepository>(_db)->getById(jobId));

			return ret;
		}

		Repository * JobExecutionsRepository::createNewInstance(sqlite3 * db)
		{
			return new JobExecutionsRepository(db);
		}

		vector<JobExecution*> JobExecutionsRepository::getAllForJob(Job* job)
		{
			// should lock this?
			sqlite3_bind_int64(_getAllJobExecsForJobStatement, 1, job->getId());
			return PreparedStatementResultGetter<JobExecution>::getResultFromPreparedStatement(_getAllJobExecsForJobStatement, this);
		}

		vector<JobExecution*> JobExecutionsRepository::getUnfinishedForJob(Job* job)
		{
			sqlite3_bind_int64(_getUnfinishedJobExecsForJobStatement, 1, job->getId());
			return PreparedStatementResultGetter<JobExecution>::getResultFromPreparedStatement(_getUnfinishedJobExecsForJobStatement, this);
		}

		JobExecutionsRepository::JobExecutionsRepository(sqlite3* db)
			: Repository(db, typeid(JobExecution).hash_code())
		{
			char zsql[1024];

			strcpy(zsql, "INSERT INTO job_execution (id, id_job, status, start_time, end_time) VALUES (?, ?, ?, ?, ?);");
			char* tail = zsql + 92;
			sqlite3_prepare_v2(_db, zsql, 1024, &_saveStatement, const_cast<const char **>(&tail));

			strcpy(zsql, "UPDATE job_execution SET id_job = ?, status = ?, start_time = ?, end_time = ? WHERE job_execution.id = ?;");
			tail = zsql + 101;
			sqlite3_prepare_v2(_db, zsql, 1024, &_updateStatement, const_cast<const char **>(&tail));

			strcpy(zsql, "DELETE FROM job_execution WHERE job_execution.id = ?;");
			tail = zsql + 53;
			sqlite3_prepare_v2(_db, zsql, 1024, &_deleteStatement, const_cast<const char **>(&tail));

			sprintf(zsql, "SELECT * FROM job_execution WHERE job_execution.id_job = ? AND job_execution.status = %d;", IN_PROGRESS);
			char* tzsql = zsql + 90;
			sqlite3_prepare_v2(db, zsql, 1024, &_getUnfinishedJobExecsForJobStatement, const_cast<const char **>(&tzsql));
			
			sprintf(zsql, "SELECT * FROM job_execution WHERE job_execution.id_job = ?;");
			tzsql = zsql + 62;
			sqlite3_prepare_v2(db, zsql, 1024, &_getAllJobExecsForJobStatement, const_cast<const char **>(&tzsql));

			sprintf(zsql, "SELECT * FROM job_execution WHERE job_execution.id = ?;");
			tail = zsql + 55;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getByIdStatement, const_cast<const char **>(&tail));

			sqlite3_exec(db, "select max(id) from job_execution;", JobExecutionsRepository::getMaxIdCallback, this, 0);
		}

		void JobExecutionsRepository::mDelete(Entity * entity)
		{
			JobExecution* jobExecution = (JobExecution*)entity;
			sqlite3_bind_int64(_deleteStatement, 1, jobExecution->_id);
			sqlite3_step(_deleteStatement);
			sqlite3_reset(_deleteStatement);
			detachFromContext(entity);
		}
		void JobExecutionsRepository::save(Entity * entity)
		{
			JobExecution* jobExecution = (JobExecution*)entity;
			sqlite3_bind_int64(_saveStatement, 1, jobExecution->_id);
			sqlite3_bind_int64(_saveStatement, 2, jobExecution->getJob()->getId());
			sqlite3_bind_int(_saveStatement, 3, jobExecution->getJobExecutionStatus());
			string startTime = to_iso_string(jobExecution->getStartTime());
			sqlite3_bind_text(_saveStatement, 4, startTime.c_str(), startTime.size(), SQLITE_STATIC);
			string endTime = to_iso_string(jobExecution->getEndTime());
			sqlite3_bind_text(_saveStatement, 5, endTime.c_str(), endTime.size(), SQLITE_STATIC);
			sqlite3_step(_saveStatement);
			sqlite3_reset(_saveStatement);
		}

		void JobExecutionsRepository::update(Entity * entity)
		{
			JobExecution* jobExecution = (JobExecution*)entity;
			sqlite3_bind_int64(_updateStatement, 1, jobExecution->getJob()->getId());
			sqlite3_bind_int(_updateStatement, 2, jobExecution->getJobExecutionStatus());
			string startTime = to_iso_string(jobExecution->getStartTime());
			sqlite3_bind_text(_updateStatement, 3, startTime.c_str(), startTime.size(), SQLITE_STATIC);
			string endTime = to_iso_string(jobExecution->getEndTime());
			sqlite3_bind_text(_updateStatement, 4, endTime.c_str(), endTime.size(), SQLITE_STATIC);
			sqlite3_bind_int64(_updateStatement, 5, jobExecution->_id);
			sqlite3_step(_updateStatement);
			sqlite3_reset(_updateStatement);
		}
	}
}