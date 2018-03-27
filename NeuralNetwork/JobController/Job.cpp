#include "Job.h"

using namespace MFNeuralNetwork::Data;


//void MFNeuralNetwork::Data::Job::setId(long long id) {
//	_id = id;
//	_dirty = true;
//}

void MFNeuralNetwork::Data::Job::addJobFragment(std::shared_ptr<JobFragment> jobFragment) {
	_jobFragments.push_back(jobFragment);
	jobFragment->setJob(WEAK_JOB_PTR(this));
}

void MFNeuralNetwork::Data::Job::addJobExecution(std::shared_ptr<JobExecution> jobExecution) {
	_jobExecutions.push_back(jobExecution);
}

void MFNeuralNetwork::Data::Job::releaseFinishedExecutions() {
	auto rIter = _jobExecutions.rbegin();
	auto rIterEnd = _jobExecutions.rend();
	while (rIter != rIterEnd) {
		//(*(rIter))->
		//if ()
		_jobExecutions.erase(std::next(rIter).base());
		rIter++;
	}
}

MFNeuralNetwork::Data::Job::~Job()
{
	for (auto fragment : _jobFragments) {
		// persist job fragments
	}
	for (auto execution : _jobExecutions) {
		// persist job executions
	}
}
