#include "JobExecutor.h"

namespace MFNeuralNetwork {
	namespace Data {
		using namespace std;

		void JobExecutor::setCurrentJobFragmentExecution(JobFragmentExecution* value)
		{
			_currentJobFragmentExecution = value;
		}

		JobFragmentExecution* JobExecutor::getJobFragmentExecution()
		{
			return _currentJobFragmentExecution;
		}

	}
}