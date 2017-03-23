#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
class A{
        public:
        A();
        A(int a,int b,int c){
                K = a;
                RA = b;
                RB = c;
        };
        void count(float win){
                        EA = 1/(1+pow(10,(RB-RA)/400));
                        EB = 1/(1+pow(10,(RA-RB)/400));
                        RA = RA + K*(win-EA);
                        RB = RB + K*((1-win)-EB);
                        ans1 = (int)RA;
                        ans2 = (int)RB;
                        ofstream outfile("file.out",ios::app);
                        outfile << ans1 << " " << ans2 << endl;
        }
        private:
        int ans1,ans2;
        double K,RA,RB,EA,EB;

};

