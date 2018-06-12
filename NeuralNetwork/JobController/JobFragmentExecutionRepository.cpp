#include <posix_time\posix_time.hpp>
#include "JobFragmentExecutionRepository.h"
#include "JobFragmentExecution.h"
#include "JobExecutor.h"
#include "JobFragment.h"

using namespace std;
using namespace boost::posix_time;

namespace MFNeuralNetwork {
	namespace Data {
		Entity * JobFragmentExecutionRepository::populateFromPreparedStatement(sqlite3_stmt * s)
		{
			JobFragmentExecution* ret = new JobFragmentExecution();
			ret->_id = sqlite3_column_int64(s, 0);
			ret->_id = sqlite3_column_int(s, 1);
			string startTime((char*)sqlite3_column_text(s, 2));
			ret->_startTime = from_iso_string(startTime);
			string endTime((char*)sqlite3_column_text(s, 3));
			ret->_endTime = from_iso_string(endTime);

			return ret;
		}
		int JobFragmentExecutionRepository::getMaxIdCallback(void * t, int num, char ** values, char ** names)
		{
			JobFragmentExecutionRepository* instance = (JobFragmentExecutionRepository*)t;
			instance->_lastIndex = stoll({ values[0] });
			return 0;
		}
		void JobFragmentExecutionRepository::save(Entity * entity)
		{
			JobFragmentExecution* jobFragmentExecution = (JobFragmentExecution*)entity;
			sqlite3_bind_int64(_saveStatement, 0, jobFragmentExecution->getId());
			sqlite3_bind_int64(_saveStatement, 1, jobFragmentExecution->_jobFragment->getId());
			sqlite3_bind_int64(_saveStatement, 2, jobFragmentExecution->_jobExecutor->getId());
			string startTime = to_iso_string(jobFragmentExecution->_startTime);
			sqlite3_bind_text(_saveStatement, 3, (char*)startTime.c_str(), startTime.size(), SQLITE_STATIC);
			string endTime = to_iso_string(jobFragmentExecution->_endTime);
			sqlite3_bind_text(_saveStatement, 4, (char*)endTime.c_str(), endTime.size(), SQLITE_STATIC);
			sqlite3_step(_saveStatement);
			sqlite3_reset(_saveStatement);
		}
		void JobFragmentExecutionRepository::update(Entity * entity)
		{
			JobFragmentExecution* jobFragmentExecution = (JobFragmentExecution*)entity;
			sqlite3_bind_int64(_updateStatement, 0, jobFragmentExecution->_jobFragment->getId());
			sqlite3_bind_int64(_updateStatement, 1, jobFragmentExecution->_jobExecutor->getId());
			string startTime = to_iso_string(jobFragmentExecution->_startTime);
			sqlite3_bind_text(_updateStatement, 2, (char*)startTime.c_str(), startTime.size(), SQLITE_STATIC);
			string endTime = to_iso_string(jobFragmentExecution->_endTime);
			sqlite3_bind_text(_updateStatement, 3, (char*)endTime.c_str(), endTime.size(), SQLITE_STATIC);
			sqlite3_bind_int64(_updateStatement, 5, jobFragmentExecution->getId());
			sqlite3_step(_updateStatement);
			sqlite3_reset(_updateStatement);
		}
		void JobFragmentExecutionRepository::mDelete(Entity * entity)
		{
			JobFragmentExecution* jobFragmentExecution = (JobFragmentExecution*)entity;
			sqlite3_bind_int64(_deleteStatement, 0, jobFragmentExecution->getId());
			sqlite3_step(_deleteStatement);
			sqlite3_reset(_deleteStatement);
		}
		std::vector<JobFragmentExecution*> JobFragmentExecutionRepository::getAllForJobFrag(JobFragment* jobFragment)
		{
			sqlite3_bind_int64(_getAllJobFragExecsForJobFragStatement, 0, jobFragment->getId());
			return PreparedStatementResultGetter<JobFragmentExecution>::getResultFromPreparedStatement(_getAllJobFragExecsForJobFragStatement, this);
		}
		std::vector<JobFragmentExecution*> JobFragmentExecutionRepository::getUnfinishedForJobFrag(JobFragment* jobFragment)
		{
			sqlite3_bind_int64(_getAllJobFragExecsForJobFragExecStatement, 0, jobFragment->getId());
			return PreparedStatementResultGetter<JobFragmentExecution>::getResultFromPreparedStatement(_getAllJobFragExecsForJobFragExecStatement, this);
		}
		JobFragmentExecutionRepository::JobFragmentExecutionRepository(sqlite3 * db)
			: Repository(db, typeid(JobFragmentExecution).hash_code())
		{
			char zsql[1024];
			strcpy(zsql, "INSERT INTO job_fragment_execution VALUES (?, ?, ?, ?, ?);");
			char* tail = zsql + 58;
			sqlite3_prepare_v2(_db, zsql, 1024, &_saveStatement, const_cast<const char **>(&tail));
			strcpy(zsql, "UPDATE job_fragment_execution SET id = ?,  WHERE job_fragment_execution.id = ?;");
			tail = zsql + 79;
			sqlite3_prepare_v2(_db, zsql, 1024, &_updateStatement, const_cast<const char **>(&tail));
			strcpy(zsql, "DELETE FROM job_fragment_execution WHERE job_fragment_execution.id = ?;");
			tail = zsql + 71;
			sqlite3_prepare_v2(_db, zsql, 1024, &_deleteStatement, const_cast<const char **>(&tail));
			strcpy(zsql, "SELECT * FROM job_fragment_execution WHERE job_fragment_execution.job_fragment_id = ?;");
			tail = zsql + 86;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getAllJobFragExecsForJobFragStatement, const_cast<const char **>(&tail));
			strcpy(zsql, "SELECT * FROM job_fragment_execution WHERE job_fragment_execution.job_executor_id = ?;");
			tail = zsql + 86;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getAllJobFragExecsForJobFragExecStatement, const_cast<const char **>(&tail));
			sprintf(zsql, "SELECT * FROM job_fragment_execution WHERE job_fragment_execution.id = ?;");
			tail = zsql + 73;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getByIdStatement, const_cast<const char **>(&tail));
		}
		JobFragmentExecutionRepository * JobFragmentExecutionRepository::getInstance()
		{
			return _instance;
		}
	}
}