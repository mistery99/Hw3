#include <iostream>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "process.hpp"
#include "c++lang.hpp"
#include "filesystem.hpp"
using namespace std;

extern bool quitTime = false;

void sigint(int signal) {
    quitTime = true;
}
void sigusr2(int signal){

}

int main(int argc, char* argv[]){
	signal(SIGINT,sigint);
	signal(SIGUSR2,sigusr2);
	pid_t pid;
	pid = getpid();
	bool quit = false;
	char input;
	if (argc<2){
		input='n';
	}
	else{
		input= *argv[1];
	}
	while (quit==false){
		cout << "Main menu PID:" << pid << endl;
			cout << "1:  use kill to send signal 0 to itself\n";
			cout << "2:  use kill to send signal SIGUSR2 to itself\n";
			cout << "3:  clock()\n";
			cout << "4:  1ns\n";
			cout << "5:  1,000ns\n";
			cout << "6:  1,000,000ns\n";
			cout << "7:  1,000,000,000ns\n";
			cout << "8:  fork()\n";
			cout << "9:  arithmetic\n";
			cout << "a:  cmath\n";
			cout << "b:  new/delete\n";
			cout << "c:  new\n";
			cout << "d:  getcwd\n";
			cout << "e:  chdir\n";
			cout << "f:  access\n";
			cout << "g:  sync\n";
			cout << "h:  chmod\n";
			cout << "i:  dup2\n";
			cout << "q:  quit\n";
			cin >> input;
		switch (input){
			case '1':
				k(pid);
				break;
			case '2':
				k2(pid);
				break;
			case '3':
				c();
				break;
			case '4':
				Nano(1);
				break;
			case '5':
				Nano(1000);
				break;
			case '6':
				Nano(1000000);
				break;
			case '7':
				Nano(1000000000);
				break;
			case '8':
				f();
				break;
			case '9':
				a();
				break;
			case 'a':
				m();
				break;
			case 'b':
				nd();
				break;
			case 'c':
				n();
				break;
			case 'd':
				cwd();
				break;
			case 'e':
				chd();
				break;
			case 'f':
				acc();
				break;
			case 'g':
				s();
				break;
			case 'h':
				sy();
				break;
			case 'i':
				dub();
				break;
			case 'q':
				return 0;
				break;
			
		}
	}
return 0;
}
