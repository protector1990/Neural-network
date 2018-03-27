#pragma once
#include "Entity.h"
#include "sqlite\sqlite3.h"
#include "JobFragmentExecution.h"
#include "DataSet.h"
#include <memory>
#include <vector>

namespace MFNeuralNetwork {
	namespace Data {
		class Job;
		class JobFragment : public Entity {
			friend class JobFragmentRepository;
			
			//class JobFragmentExecution;
		private:
			JobFragment() {}
			long long _id;
			// This is a weak ptr because we don't want JobFragment to keep job alive
			std::weak_ptr<Job> _job;
			std::vector<std::shared_ptr<JobFragmentExecution>> _jobFragmentExecutions;
			std::shared_ptr<DataSet> _dataSet;
			std::string _fragmentDescription;
		public:
			void setJob(std::weak_ptr<Job> job);
			std::weak_ptr<Job> getJob();
			void addJobFragmentExecution(std::shared_ptr<JobFragmentExecution> jobFragmentExecution);
			std::vector<std::shared_ptr<JobFragmentExecution>> getjobFragmentExecutions;
		};

		//class TargetAccuracyJobFragment : public JobFragment {
		//	friend class JobFragmentRepository;
		//private:
		//	float _targetAccuracy;
		//	TargetAccuracyJobFragment();
		//public:
		//	float getTargetAccuracy();
		//	void setTargetAccuracy(float newValue);
		//};
		//
		//class NumberOfRepetitionsJobFragment : public JobFragment {
		//	friend class JobFragmentRepository;
		//private:
		//	NumberOfRepetitionsJobFragment();
		//	uint _numOfRepetitions;
		//public:
		//	uint getNumOfRepetitions();
		//	void setnumOfRepetitions(uint value);
		//};
	}
}