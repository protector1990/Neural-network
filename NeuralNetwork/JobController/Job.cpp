#include "Job.h"
#include "JobExecution.h"
#include "JobFragmentRepository.h"
#include "JobExecutionRepository.h"

using namespace MFNeuralNetwork::Data;


//void MFNeuralNetwork::Data::Job::setId(long long id) {
//	_id = id;
//	_dirty = true;
//}

void Job::addJobFragment(JobFragment* jobFragment) {
	_jobFragments.push_back(jobFragment);
	jobFragment->setJob(this);
}

void Job::addJobExecution(JobExecution* jobExecution) {
	_jobExecutions.push_back(jobExecution);
	jobExecution->setJob(this);
}

vector<JobFragment*> MFNeuralNetwork::Data::Job::getJobFragments()
{
	vector<JobFragment*> newJobFragments = JobFragmentRepository::getInstance()->getJobFragmentsForJob(this);
	return _jobFragments;
}

std::vector<JobFragment*> MFNeuralNetwork::Data::Job::getJobExecutions()
{
	return std::vector<JobFragment*>();
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
	//for (auto fragment : _jobFragments) {
	//	// persist job fragments
	//}
	//for (auto execution : _jobExecutions) {
	//	// persist job executions
	//}
}
