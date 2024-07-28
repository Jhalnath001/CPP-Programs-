//dynamic memory allocation and deallocation(new and delete operator)
#include<iostream>
using namespace std;
int main()
{
	int *x=new int;
	*x=100;
	cout<<"value of x is:"<<*x<<endl;
	delete x;
	cout<<"value of x after deleted is:"<<*x<<endl;
	float *y=new float;
	*y=56.78f;
	cout<<"value of y is:"<<*y<<endl;
	delete y;
	cout<<"value of y after deleted is:"<<*y<<endl;
	return 0;
	
}
