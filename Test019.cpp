//pointer example
#include<iostream>
using namespace std;
int main(){
	int* ptr;
	ptr=new int;
	*ptr=100;
	cout<<"ptr="<<*ptr;//display 100
	return 0;
}
