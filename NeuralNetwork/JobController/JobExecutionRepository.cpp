#include "JobExecutionRepository.h"
#include "JobExecution.h"

using namespace std;
using namespace MFNeuralNetwork::Data;

Entity * JobExecutionsRepository::populateFromPreparedStatement(sqlite3_stmt * s)
{
	JobExecution* ret = new JobExecution();
	ret->_id = sqlite3_column_int64(s, 1);
	Repository::attachToContext(ret);

	return nullptr;
}

vector<shared_ptr<JobExecution>> JobExecutionsRepository::getJobExecutionsForJob(weak_ptr<Job> job)
{
	// should lock this?
	vector<shared_ptr<JobExecution>> ret;
	sqlite3_bind_int64(_getAllJobExecutionsForJob, 1, job.lock()->getId());
	while (true) {
		int status = sqlite3_step(_getAllJobExecutionsForJob);
		switch (status) {
		case SQLITE_ROW:

		}
	}
}

std::vector<std::shared_ptr<JobExecution>> MFNeuralNetwork::Data::JobExecutionsRepository::getUnfinishedJobExecutionsForJob(std::weak_ptr<Job> job)
{
	return std::vector<std::shared_ptr<JobExecution>>();
}