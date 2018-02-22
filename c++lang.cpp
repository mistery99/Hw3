#include <iostream>
#include <cmath>
using namespace std;
extern bool quitTime;

void a(){
	while(quitTime==false){
		1+1;
	}
	quitTime=false;
}

void m(){
	while(quitTime==false){
		sqrt(1);
	}
	quitTime=false;
}

void nd(){
	while(quitTime==false){
		int *x= new int[100];
		delete []x;
	}
	quitTime=false;
}

void n(){
	while(quitTime==false){
		int *x= new int[100];
	}
	quitTime=false;
}
