#include "WorkerThread.h"
#include "ThreadDispatcher.h"
#include <exception>

using namespace std;

namespace MFNeuralNetwork {
	void WorkerThread::threadLoop()
	{
		while (true) {
			unique_lock<mutex> l(_m);
			_dispatcher->threadFinished(this);
			_cv.wait(l, [this]() {return !_free; });
			_toRun();
			_free = true;
		}
	}
	void WorkerThread::executeTask(void(*toRun)())
	{
		if (!_free) {
			throw exception("Thread already at work!");
		}
		{
			unique_lock<mutex> l(_m);
			_free = false;
			_toRun = toRun;
		}
		_cv.notify_one();
	}
	WorkerThread::WorkerThread(ThreadDispatcher * dispatcher) :
		_dispatcher(dispatcher)
	{}
}