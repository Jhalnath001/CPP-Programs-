//manipulators example
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setw(5)<<"*"<<endl;
	cout<<setw(6)<<"***"<<endl;
	cout<<setw(7)<<"*****"<<endl;
	cout<<setw(8)<<"*******"<<endl;
	cout<<setw(9)<<"*********"<<endl;
	double x=24.99;
	cout<<"X="<<setprecision(3)<<x;
	return 0;
}
