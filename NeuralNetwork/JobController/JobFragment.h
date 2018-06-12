#pragma once
#include "Entity.h"
#include "sqlite\sqlite3.h"
#include "JobFragmentExecution.h"
#include "DataSet.h"
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
			Job* _job;
			std::vector<JobFragmentExecution*> _jobFragmentExecutions;
			DataSet* _dataSet;
			std::string _fragmentDescription;
		public:
			void setJob(Job* job);
			Job* getJob();
			DataSet* getDataSet();
			void setDataSet(DataSet* dataSet);
			void addJobFragmentExecution(JobFragmentExecution* jobFragmentExecution);
			std::vector<JobFragmentExecution*> getjobFragmentExecutions();
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