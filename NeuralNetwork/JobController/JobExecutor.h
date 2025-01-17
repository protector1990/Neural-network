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
		class JobExecutor : public Entity {
		private:
			JobExecutorStatus _status;
			ushort _numberofThreads;
			ushort _amountOfMemory;
			ushort _cpuClock;
			uint _aomuntOfHdd;
			std::string _ipAddress;
			JobExecutor() {}
			JobFragmentExecution* _currentJobFragmentExecution;
			PTIME::ptime _wentOffline;
		public:
			void setCurrentJobFragmentExecution(JobFragmentExecution* value);
			JobFragmentExecution* getJobFragmentExecution();
		};
	}
}