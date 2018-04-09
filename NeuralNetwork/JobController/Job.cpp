#include "Job.h"
#include "JobExecution.h"

using namespace MFNeuralNetwork::Data;


//void MFNeuralNetwork::Data::Job::setId(long long id) {
//	_id = id;
//	_dirty = true;
//}

void Job::addJobFragment(std::shared_ptr<JobFragment> jobFragment) {
	_jobFragments.push_back(jobFragment);
	jobFragment->setJob(this);
}

void Job::addJobExecution(std::shared_ptr<JobExecution> jobExecution) {
	_jobExecutions.push_back(jobExecution);
	jobExecution->setJob(this);
}

void Job::releaseFinishedExecutions() {
	auto rIter = _jobExecutions.rbegin();
	auto rIterEnd = _jobExecutions.rend();
	while (rIter != rIterEnd) {
		//(*(rIter))->
		//if ()
		_jobExecutions.erase(std::next(rIter).base());
		rIter++;
	}
}

Job::~Job()
{
	for (auto fragment : _jobFragments) {
		// persist job fragments
	}
	for (auto execution : _jobExecutions) {
		// persist job executions
	}
}
