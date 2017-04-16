#include"lab2.h"
int main(){
	int a,b,c;
	ifstream infile("file.in",ios::in);
	infile >> a >> b >> c;
	ofstream outfile("file.out",ios::app);
	outfile << b << "\t" << c << endl;
	float arr[6];
	A A1(a,b,c);
	for (int i=0;i<6;i++){
		infile >> arr[i];
		A1.count(arr[i]);
	}
	return 0;
}

