//pointer in c++
#include<iostream>
using namespace std;
int main()
{
	int* ptr;
	int a=56;
	ptr=&a;
	cout<<"value of a:"<<a<<endl;
	cout<<"Address of a:"<<&a<<endl;
	cout<<"Address of a:"<<ptr<<endl;
	cout<<"Address of ptr:"<<&ptr<<endl;
	cout<<"value of a from ptr:"<<*ptr;
	return 0;
}
