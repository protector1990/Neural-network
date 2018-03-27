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
		private:
			JobFragmentExecution() {}
			std::weak_ptr<JobFragment> _jobFragment;
			std::weak_ptr<JobExecutor> _jobExecutor;
			PTIME::ptime _startTime;
			PTIME::ptime _endTime;
			
		public:
			void setJobFragment(std::weak_ptr<JobFragment> jobFragment);
			std::weak_ptr<JobFragment> getjobFragment;
			void setJobExecutor(std::weak_ptr<JobExecutor> jobExecutor);
			std::weak_ptr<JobExecutor> getJobexecutor();
			void setStartTime(PTIME::ptime time = PTIME::second_clock::local_time());
			PTIME::ptime getStartTime();
			void setEndTime(PTIME::ptime time = PTIME::second_clock::local_time());
			PTIME::ptime getEndTime();			
		};
	}
}