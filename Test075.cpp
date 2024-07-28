//friend class
#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
	void set(){
		a=0;
	}
	void display(){
		cout<<"value of a:"<<a<<endl;
	}
	friend class B;
};
class B{
	public:
		void process(A* obj){
			obj->a=100;
			obj->display();
		}
};
int main(){
	A obj1;
	obj1.set();//a=0
	B obj2;
	obj2.process(&obj1);//a=100 display
	return 0;
}
