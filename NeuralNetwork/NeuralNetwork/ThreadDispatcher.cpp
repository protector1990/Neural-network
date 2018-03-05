#include "ThreadDispatcher.h"

using namespace std;

void MFNeuralNetwork::ThreadDispatcher::dispatcherLoop()
{
	new WorkerThread(this); //create one worker thread
	while (true) {
		{
			unique_lock<mutex> lock(_mutex);
			if (!_waitingTasks.empty() && !_freeThreads.empty()) {
				size_t tasksToDispatch = min(_waitingTasks.size(), _freeThreads.size());
				for (; tasksToDispatch > 0; --tasksToDispatch) {
					WorkerThread* t = _freeThreads.top();
					_freeThreads.pop();
					t->executeTask(_waitingTasks.front());
					_waitingTasks.pop();
				}
			}
		}
		this_thread::sleep_for(chrono::milliseconds(500));
	}
}

void MFNeuralNetwork::ThreadDispatcher::threadFinished(WorkerThread * thread)
{
	unique_lock<mutex> lock(_mutex);
	_freeThreads.push(thread);
}

void MFNeuralNetwork::ThreadDispatcher::postTask(void(*task)())
{
	unique_lock<mutex> lock(_mutex);
	//if (_freeThreads.empty()) {
		_waitingTasks.push(task);
	//}
	//else {
	//	WorkerThread* t = _freeThreads.top();
	//	_freeThreads.pop();
	//	t->executeTask(task);
	//}
}


