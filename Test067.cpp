//passing object as an argument by pointer
#include<iostream>
using namespace std;
class A;
class B{
	public:
		void set(A* obj);
};
class A{
	public:
		int x;
	public:
		friend void B::set(A*);
};
void B::set(A* obj){
	obj->x=100;
	cout<<"Data in private member of A class(x)="<<obj->x<<endl;
}
int main()
{
	A obj1;
	B obj2;
	obj2.set(&obj1);
	cout<<obj1.x;
	return 0;
}
