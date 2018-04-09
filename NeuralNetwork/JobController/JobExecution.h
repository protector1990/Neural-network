#pragma once
#include "JobExecutionRepository.h"
#include "Job.h"
#include <posix_time\posix_time.hpp>

#define PTIME boost::posix_time

namespace MFNeuralNetwork {
	namespace Data {
		enum JobExecutionStatus { FINISHED = 1, IN_PROGRESS, FAILED, TODO, ABORTED };
		//class JobExecutionRepository;
		class JobExecution : public Entity {
			friend class JobExecutionsRepository;
			friend Entity * JobExecutionsRepository::populateFromPreparedStatement(sqlite3_stmt * s);
			friend vector<shared_ptr<JobExecution>> JobExecutionsRepository::getAllForJob(Job* job);
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