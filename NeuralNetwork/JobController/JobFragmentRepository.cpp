#include "JobFragmentRepository.h"
#include "Job.h"
#include "DataSetRepository.h"
#include "JobRepository.h"

namespace MFNeuralNetwork {
	namespace Data {

		using namespace std;

		Entity * JobFragmentRepository::populateFromPreparedStatement(sqlite3_stmt * s)
		{
			JobRepository* jobRepository = getInstance<JobRepository>(_db);
			DataSetRepository* dataSetRepository = getInstance<DataSetRepository>(_db);
			JobFragment* ret = new JobFragment();
			ret->_id = sqlite3_column_int64(s, 1);
			ret->_job = (Job*) jobRepository->getById(sqlite3_column_int64(s, 2));
			ret->_dataSet = (DataSet*)dataSetRepository->getById(sqlite3_column_int64(s, 3));
			ret->_fragmentDescription = string((char*)sqlite3_column_text(s, 4));
			return ret;
		}

		int JobFragmentRepository::getMaxIdCallback(void * t, int num, char ** values, char ** names)
		{
			JobFragmentRepository* instance = (JobFragmentRepository*)t;
			instance->_lastIndex = stoll({ values[0] });
			return 0;
		}

		void JobFragmentRepository::save(Entity * entity)
		{
			JobFragment* jobFragment = (JobFragment*)entity;
			sqlite3_bind_int64(_saveStatement, 1, jobFragment->_id);
			sqlite3_bind_int64(_saveStatement, 2, jobFragment->getJob()->getId());
			sqlite3_bind_int(_saveStatement, 3, jobFragment->_dataSet->getId());
			sqlite3_bind_text(_saveStatement, 4, jobFragment->_fragmentDescription.c_str(), jobFragment->_fragmentDescription.size(), SQLITE_STATIC);
			sqlite3_step(_saveStatement);
			sqlite3_reset(_saveStatement);
		}

		void JobFragmentRepository::update(Entity * entity)
		{
			JobFragment* jobFragment = (JobFragment*)entity;
			sqlite3_bind_int64(_saveStatement, 1, jobFragment->getJob()->getId());
			sqlite3_bind_int(_saveStatement, 2, jobFragment->_dataSet->getId());
			sqlite3_bind_text(_saveStatement, 3, jobFragment->_fragmentDescription.c_str(), jobFragment->_fragmentDescription.size(), SQLITE_STATIC);
			sqlite3_bind_int64(_saveStatement, 4, jobFragment->_id);
			sqlite3_step(_saveStatement);
			sqlite3_reset(_saveStatement);
		}

		void JobFragmentRepository::mDelete(Entity * entity)
		{
			JobFragment* jobFragment = (JobFragment*)entity;
			sqlite3_bind_int64(_deleteStatement, 1, jobFragment->_id);
			sqlite3_step(_deleteStatement);
			sqlite3_reset(_deleteStatement);
			detachFromContext(entity);
		}

		std::vector<JobFragment*> JobFragmentRepository::getJobFragmentsForJob(Job* job)
		{
			sqlite3_bind_int64(_getAllJobFragmentsForJobStatement, 1, job->getId());
			return PreparedStatementResultGetter<JobFragment>::getResultFromPreparedStatement(_getAllJobFragmentsForJobStatement, this);
		}

		JobFragmentRepository::JobFragmentRepository(sqlite3 * db)
			: Repository (db, typeid(JobFragment).hash_code())
		{
			char zsql[1024];
			strcpy(zsql, "INSERT INTO job_fragment VALUES (?, ?, ?, ?);");
			char* tail = zsql + 45;
			sqlite3_prepare_v2(_db, zsql, 1024, &_saveStatement, const_cast<const char **>(&tail));
			strcpy(zsql, "UPDATE job_fragment SET id_job = ?, id_dataset = ?, description = ?  WHERE job_fragment.id = ?;");
			tail = zsql + 79;
			sqlite3_prepare_v2(_db, zsql, 1024, &_updateStatement, const_cast<const char **>(&tail));
			strcpy(zsql, "DELETE FROM job_fragment WHERE job_fragment.id = ?;");
			tail = zsql + 71;
			sqlite3_prepare_v2(_db, zsql, 1024, &_deleteStatement, const_cast<const char **>(&tail));
			strcpy(zsql, "SELECT * FROM job_fragment WHERE job_frament.id_job = ?;");
			tail = zsql + 56;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getAllJobFragmentsForJobStatement, const_cast<const char **>(&tail));
			sprintf(zsql, "SELECT * FROM job_fragment WHERE job_fragment.id = ?;");
			tail = zsql + 53;
			sqlite3_prepare_v2(_db, zsql, 1024, &_getByIdStatement, const_cast<const char **>(&tail));
		}

		Repository * JobFragmentRepository::createNewInstance(sqlite3 * db)
		{
			return new JobFragmentRepository(db);
		}

	}
}