#pragma once
#include <posix_time\posix_time.hpp>
#include <vector>
#include "Entity.h"

#define PTIME boost::posix_time

namespace MFNeuralNetwork {
	namespace Data {
		enum JobExecutionStatus { FINISHED = 1, IN_PROGRESS, FAILED, TODO, ABORTED };
		class JobExecutionRepository;
		class Job;
		class JobExecution : public Entity {
			friend class JobExecutionsRepository;
		private:
			Job* _job;
			JobExecutionStatus _status;
			PTIME::ptime _startTime = PTIME::ptime(boost::posix_time::neg_infin);
			PTIME::ptime _endTime = PTIME::ptime(boost::posix_time::neg_infin);

		private:
			JobExecution() {}
		public:
			void setStartTime(PTIME::ptime time = PTIME::second_clock::local_time());
			PTIME::ptime getStartTime();
			void setEndTime(PTIME::ptime time = PTIME::second_clock::local_time());
			PTIME::ptime getEndTime();
			void setJobExecutionStatus(JobExecutionStatus status);
			JobExecutionStatus getJobExecutionStatus();
			void setJob(Job* job);
			Job* getJob();
		};
	}
}