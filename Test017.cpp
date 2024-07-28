//setw,endl and setprecision Manipulators
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double x=45.4349;
	cout<<setw(5)<<"1"<<endl;
	cout<<setw(6)<<"100"<<endl;
	cout<<setw(7)<<"10000"<<endl;
	cout<<setw(8)<<"1000000"<<endl;
	cout<<setw(9)<<"100000000"<<endl;
	cout<<setprecision(5)<<x;
	return 0;
}
