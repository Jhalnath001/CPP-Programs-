//friend class 
#include<iostream>
using namespace std;
class B;
class A{
	private:
	int a;
	void display(){
		cout<<endl<<"a="<<a;
	}
	friend class B;
};
class B{
	public:
		void operateData(A obj){
			obj.a=100;	
			obj.display();
		}
};
int main(){
	A obj1;
	B obj2;
	obj2.operateData(obj1);
	return 0;
	
	
}
