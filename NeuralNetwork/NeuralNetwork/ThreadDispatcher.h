#pragma once

#include "WorkerThread.h"
#include <stack>
#include <queue>
#include <mutex>

namespace MFNeuralNetwork {
	class ThreadDispatcher {
	private:
		std::mutex _mutex;
		std::stack<WorkerThread*> _freeThreads;
		std::queue<void(*)()> _waitingTasks;
		std::thread dispatcherThread{ &ThreadDispatcher::dispatcherLoop, this };
		bool _running = true;
		void dispatcherLoop();
	public:
		void threadFinished(WorkerThread* thread);
		void postTask(void(*task)());
		ThreadDispatcher();
		~ThreadDispatcher();
	};
}