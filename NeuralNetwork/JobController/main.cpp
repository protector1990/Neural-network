#include "sqlite\sqlite3.h"
#include <stdio.h>
#include <iostream>
#include "JobRepository.h"
#include "Job.h"
#include "JobExecutionRepository.h"
#include "JobExecution.h"

using namespace std;
using namespace MFNeuralNetwork::Data;

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
    for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
  }
void main() {
	sqlite3* db;
	int rc;
	rc = sqlite3_open("appFile", &db);
	if (rc) {
		return;
	}
	JobRepository* jobRepository = JobRepository::getInstance();
	JobExecutionsRepository* jobExecutionRepository = JobExecutionsRepository::getInstance();
	
	//Job* job = jobRepository.createNewEntity<Job>();
	//JobExecution* jobExecution = jobExecutionsRepository.createNewEntity<JobExecution>();
	//jobExecution->setStartTime(boost::posix_time::time_from_string("2018-02-02 00:00:00.000"));
	//jobExecution->setEndTime(boost::posix_time::time_from_string("2018-02-03 00:00:00.000"));
	//
	//jobExecution->setJobExecutionStatus(JobExecutionStatus::FINISHED);
	//
	//job->addJobExecution(jobExecution);
	//
	//jobRepository.save(job);

	auto jobs = jobRepository->loadAllJobs();

	int x = 0;

	system("pause");
}