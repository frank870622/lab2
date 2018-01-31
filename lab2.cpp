#include<iostream>
#include<cstdlib>
using namespace std;
#include"lab2.h"

A::A(){
	ans1 = 0;
	ans2 = 0;
	K = 0;
	RA = 0;
	RB = 0;
	EA = 0;
	EB = 0;
}
A::A(int a,int b,int c){
	K = a;
	RA = b;
	RB = c;
	ans1 = 0;
	ans2 = 0;
	EA = 0;
	EB = 0;
}
void A::count(float win){
	EA = 1 / (1 + pow(10, (RB - RA) / 400));
	EB = 1 / (1 + pow(10, (RA - RB) / 400));
	RA = RA + K * (win - EA);
	RB = RB + K * ((1 - win) - EB);
	RA = floor(RA + 0.5);
	RB = floor(RB + 0.5);
	ans1 = (int)RA;
	ans2 = (int)RB;
	ofstream outfile("file.out", ios::app);
	outfile << ans1 << "\t" << ans2 << endl;
}

int main(){
	int a,b,c;
	ifstream infile("file.in", ios::in);
	infile >> a >> b >> c;
	ofstream outfile("file.out",ios::app);
	outfile << b << "\t" << c << endl;
	float arr;
	A A1(a,b,c);
	for (int i=0;i<6;i++){
		infile >> arr;
		A1.count(arr);
	}
	return 0;
}

