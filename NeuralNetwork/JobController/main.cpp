#include "sqlite\sqlite3.h"
#include <stdio.h>
#include <iostream>
#include "JobRepository.h"
#include "Job.h"

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
	char* err = new char[1024];
	rc = sqlite3_exec(db, "SELECT * from rws;", callback, 0, &err);
	if (rc) {
		return;
	}
	JobRepository s(db);
	shared_ptr<Job> job = static_pointer_cast<Job, Entity>(s.createNewEntity<Job>());
	job->addJobFragment(0);

	system("pause");
}