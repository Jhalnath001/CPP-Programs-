//inline function
#include<iostream>
using namespace std;
inline int add(int a,int b){
	return a+b;
}
int main()
{
	float sum;
	sum=add(4,5);
	cout<<"Addition is:"<<sum;
	return 0;
}
