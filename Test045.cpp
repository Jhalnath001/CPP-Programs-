//default arguments
#include<iostream>
using namespace std;
void display(int a,double b=3.14,char c='A'){
	cout<<"Value of int-a is:"<<a<<endl;
	cout<<"Value of double-b is:"<<b<<endl;
	cout<<"Value of char-c is:"<<c<<endl;
}
int main(){
	display(10,2.47,'Z');
	display(20,2.50);
	display(90);
	return 0;
}
