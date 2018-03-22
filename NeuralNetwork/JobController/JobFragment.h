#pragma once
#include "Entity.h"
#include "sqlite\sqlite3.h"

namespace MFNeuralNetwork {
	namespace Data {
		class Job;
		class JobFragment : private Entity {
			friend class JobFragmentRepository;
			
			class JobFragmentExecution;
		protected:
			JobFragment() : Entity() {}
			long long _id;
			// This is a weak ptr because we don't want JobFragment to keep job alive
			std::weak_ptr<Job> _job;
			std::vector<std::shared_ptr<JobFragmentExecution>> _jobFragmentExecutions;
		public:
			void setJob(std::weak_ptr<Job> job) {
				_job = job;
				_dirty = true;
			}
			void addJobFragmentExecution(std::shared_ptr<JobFragmentExecution> jobFragmentExecution) {
				_jobFragmentExecutions.push_back(jobFragmentExecution);
				//jobFragmentexecution.setJobFragment(std::weak_ptr<JobFragmentexecution>(this));
				_dirty = true;
			}
		};
	}
}