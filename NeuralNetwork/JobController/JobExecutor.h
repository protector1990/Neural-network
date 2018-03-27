#pragma once
#include "Entity.h"
#include <posix_time\posix_time.hpp>
#include "JobFragmentExecution.h"

#define PTIME boost::posix_time

namespace MFNeuralNetwork {
	namespace Data {
		typedef unsigned short ushort;
		typedef unsigned int uint;
		enum JobExecutorStatus {UNRESPONSIVE = 1, AVAILABLE, BUSY};
		class JobExecutor : private Entity {
		private:
			JobExecutorStatus _status;
			ushort _numberofThreads;
			ushort _amountOfMemory;
			ushort _cpuClock;
			uint _aomuntOfHdd;
			std::string _ipAddress;
			JobExecutor() {}
			std::shared_ptr<JobFragmentExecution> _currentJobFragmentExecution;
			PTIME::ptime _wentOffline;
		public:
			void setCurrentJobFragmentExecution(std::shared_ptr<JobFragmentExecution> value);
			std::shared_ptr<JobFragmentExecution> getJobFragmentExecution();
		};
	}
}