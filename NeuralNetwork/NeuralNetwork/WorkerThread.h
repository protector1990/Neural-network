#pragma once
#include <thread>
#include <mutex>

namespace MFNeuralNetwork {
	class ThreadDispatcher;
	class WorkerThread {
		friend class ThreadDispatcher;
	private:
		std::mutex _m;
		std::condition_variable _cv;
		bool _free = true;
		bool _running = true;
		void(*_toRun)();
		ThreadDispatcher* _dispatcher;
		std::thread _thisThread{ &WorkerThread::threadLoop, this };
		void threadLoop();
		void executeTask(void(*toRun)());
	public:
		WorkerThread(ThreadDispatcher* dispatcher);
		WorkerThread(const WorkerThread& other) = delete;
		void operator=(const WorkerThread& other) = delete;
		~WorkerThread();
	};
}