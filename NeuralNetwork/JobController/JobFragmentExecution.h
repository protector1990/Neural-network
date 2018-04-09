#pragma once
#include "Entity.h"
#include <posix_time\posix_time.hpp>
#include "JobExecutor.h"
#include "JobFragment.h"
#include <memory>

#define PTIME boost::posix_time

namespace MFNeuralNetwork {
	namespace Data {
		class JobFragmentExecution : public Entity {
			friend class JobFragmentExecutionRepository;
		private:
			JobFragmentExecution() {}
			JobFragment* _jobFragment;
			JobExecutor* _jobExecutor;
			PTIME::ptime _startTime;
			PTIME::ptime _endTime;
			
		public:
			void setJobFragment(JobFragment* jobFragment);
			JobFragment* getjobFragment;
			void setJobExecutor(JobExecutor* jobExecutor);
			JobExecutor* getJobexecutor();
			void setStartTime(PTIME::ptime time = PTIME::second_clock::local_time());
			PTIME::ptime getStartTime();
			void setEndTime(PTIME::ptime time = PTIME::second_clock::local_time());
			PTIME::ptime getEndTime();			
		};
	}
}