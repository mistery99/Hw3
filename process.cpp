#include <iostream>
#include <sys/types.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>
extern bool quitTime;

using namespace std;

void k(pid_t ki){
	while(quitTime==false){
		kill(ki,0);
	}
	quitTime=false;
}
void k2(pid_t ki){
	while(quitTime==false){
		kill(ki,SIGUSR2);
	}
	quitTime=false;
}
void c(){
	while(quitTime==false){
		clock();
	}
	quitTime=false;
}
void Nano(int t){
	struct timespec req = {0};
	if(t<1000000000){
		req.tv_sec = 0;
		req.tv_nsec = t;
	}
	else{
		req.tv_sec = 1;
		req.tv_nsec = 0;
	}
	while(quitTime==false){
		nanosleep(&req, (struct timespec *)NULL);
	}
	quitTime=false;
}

void f(){
	while (quitTime==false){
		pid_t cp;
		cp=fork();
		if(cp==0){
			exit(0);
		}
		else{
			wait(0);
		}
	}
	quitTime=false;
}

