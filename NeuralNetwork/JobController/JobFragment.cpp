#include "JobFragment.h"
#include "JobFragmentExecutionRepository.h"

using namespace MFNeuralNetwork::Data;
using namespace std;

void MFNeuralNetwork::Data::JobFragment::setJob(Job* job) {
	_job = job;
	_dirty = true;
}

Job* MFNeuralNetwork::Data::JobFragment::getJob()
{
	return _job;
}

void MFNeuralNetwork::Data::JobFragment::addJobFragmentExecution(std::shared_ptr<JobFragmentExecution> jobFragmentExecution) {
	_jobFragmentExecutions.push_back(jobFragmentExecution);
	jobFragmentExecution->setJobFragment(this);
}

std::vector<std::shared_ptr<JobFragmentExecution>> MFNeuralNetwork::Data::JobFragment::getjobFragmentExecutions()
{
	_jobFragmentExecutions = JobFragmentExecutionRepository::getInstance()->getAllForJobFrag(this);
	return _jobFragmentExecutions;
}

//float MFNeuralNetwork::Data::TargetAccuracyJobFragment::getTargetAccuracy()
//{
//	return _targetAccuracy;
//}
//
//void MFNeuralNetwork::Data::TargetAccuracyJobFragment::setTargetAccuracy(float newValue)
//{
//	_targetAccuracy = newValue;
//	_dirty = true;
//}
//
//uint MFNeuralNetwork::Data::NumberOfRepetitionsJobFragment::getNumOfRepetitions()
//{
//	return _numOfRepetitions;
//}
//
//void MFNeuralNetwork::Data::NumberOfRepetitionsJobFragment::setnumOfRepetitions(uint value)
//{
//	_numOfRepetitions = value;
//}
