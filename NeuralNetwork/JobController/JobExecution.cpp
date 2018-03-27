#include "JobExecution.h"

using namespace boost::posix_time;

namespace MFNeuralNetwork {
	namespace Data {

		void JobExecution::setStartTime(ptime time)
		{
			_startTime = time;
			_dirty = true;
		}

		ptime JobExecution::getStartTime()
		{
			return _startTime;
		}

		void JobExecution::setEndTime(ptime time) {
			_endTime = time;
			_dirty = true;
		}

		ptime JobExecution::getEndTime()
		{
			return _endTime;
		}

		void JobExecution::setJobExecutionStatus(JobExecutionStatus status)
		{
			_status = status;
			_dirty = true;
		}

		JobExecutionStatus JobExecution::getJobExecutionStatus()
		{
			return _status;
		}

		void JobExecution::setJob(std::weak_ptr<Job> job)
		{
			_job = job;
			_dirty = true;
		}

		std::weak_ptr<Job> JobExecution::getJob()
		{
			return _job;
		}
	}
}