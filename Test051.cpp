//protected access specifier
#include<iostream>
using namespace std;
class A{
	protected:
		int x,y;
};
class B:public A{
	public:S
		void setData(){
			cout<<"Enter first number:";
			cin>>x;
			cout<<"Enter second number:";
			cin>>y;
		}
		void displaySum(){
			cout<<"sum="<<x+y;
		}
};
int main(){
	B obj;
	obj.setData();
	obj.displaySum();
	return 0;
}
