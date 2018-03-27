#include "JobExecutor.h"

namespace MFNeuralNetwork {
	namespace Data {
		using namespace std;

		void JobExecutor::setCurrentJobFragmentExecution(std::shared_ptr<JobFragmentExecution> value)
		{
			_currentJobFragmentExecution = value;
		}

		std::shared_ptr<JobFragmentExecution> JobExecutor::getJobFragmentExecution()
		{
			return _currentJobFragmentExecution;
		}

	}
}