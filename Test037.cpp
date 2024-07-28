//function overloading
#include<iostream>
using namespace std;
void add(int,int,int);//function declaration
void add(double,double,double);//function declaration
int main(){
	add(5.6,6.8,4.6);//function call
	add(9,8,3);
	return 0;
}
//Function definition
void add(int x,int y,int z){
	cout<<"Result with int parameter:"<<x+y+z<<endl;
}
void add(double x,double y, double z){
cout<<"Result with double parameters:"<<x+y+z<<endl;	
}
