#pragma once
#include "Repository.h"
#include "Entity.h"
#include <vector>
#include "JobFragment.h"

#define WEAK_JOB_PTR(x) std::weak_ptr<Job>(std::shared_ptr<Job>(x))

namespace MFNeuralNetwork {
	namespace Data {
		class Job : private Entity {
			friend class MFNeuralNetwork::Data::JobRepository;
			//class JobFragment;
			class JobExecution;
		private:
			Job() {}
			long long _id = 0;
			vector<std::shared_ptr<JobFragment>> _jobFragments;
			vector<std::shared_ptr<JobExecution>> _jobExecutions;
		public:
			void setId(long long id) {
				_id = id;
				_dirty = true;
			}
			void addJobFragment(std::shared_ptr<JobFragment> jobFragment) {
				_jobFragments.push_back(jobFragment);
				jobFragment->setJob(WEAK_JOB_PTR(this));
				_dirty = true;
			}
			void addJobExecution(std::shared_ptr<JobExecution> jobExecution) {
				_jobExecutions.push_back(jobExecution);
				//jobExecution->setJob(WEAK_JOB_PTR(this)));
				_dirty = true;
			}
			void releaseFinishedExecutions() {
				auto rIter = _jobExecutions.rbegin();
				auto rIterEnd = _jobExecutions.rend();
				while (rIter != rIterEnd) {
					//(*(rIter))->
					//if ()
					_jobExecutions.erase(std::next(rIter).base());
					rIter++;
				}
			}
			void loadUnFinishedExecutions() {

			}
			inline long long getId() {
				return _id;
			}
		};
	}

}