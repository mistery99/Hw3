#include <iostream>
#include <unistd.h>
#include <sys/stat.h>
using namespace std;
extern bool quitTime;

void cwd(){
	while(quitTime==false){
		char buffer[BUFSIZ];
		getcwd(buffer,BUFSIZ);
	}
	quitTime=false;
}

void chd(){
	while(quitTime==false){
		char buffer[BUFSIZ];
		chdir(getcwd(buffer,BUFSIZ));
	}
	quitTime=false;
}
void acc(){
	while(quitTime==false){
		access("/proc/self/exe", X_OK);
	}
	quitTime=false;
}

void s(){
	while(quitTime==false){
		sync();
	}
	quitTime=false;
}

void sy(){
	while(quitTime==false){
		chmod("/proc/self/exe", X_OK);
	}
	quitTime=false;
}

void dub(){
	while(quitTime==false){
		dup2(1,2);
	}
	quitTime=false;
}
