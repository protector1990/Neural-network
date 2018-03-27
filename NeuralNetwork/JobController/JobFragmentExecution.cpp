#include "JobFragmentExecution.h"

using namespace std;
using namespace boost::posix_time;

namespace MFNeuralNetwork {
	namespace Data {

		void JobFragmentExecution::setJobFragment(weak_ptr<JobFragment> jobFragment)
		{
			_jobFragment = jobFragment;
			_dirty = true;
		}

		void JobFragmentExecution::setJobExecutor(std::weak_ptr<JobExecutor> jobExecutor)
		{
			_jobExecutor = jobExecutor;
			_dirty = true;
		}

		std::weak_ptr<JobExecutor> JobFragmentExecution::getJobexecutor()
		{
			return _jobExecutor;
		}

		void JobFragmentExecution::setStartTime(PTIME::ptime time)
		{
			_startTime = time;
			_dirty = true;
		}

		ptime JobFragmentExecution::getStartTime()
		{
			return _startTime;
		}

		void JobFragmentExecution::setEndTime(PTIME::ptime time)
		{
			_endTime = time;
			_dirty = true;
		}

		ptime JobFragmentExecution::getEndTime()
		{
			return _endTime;
		}

	}
}