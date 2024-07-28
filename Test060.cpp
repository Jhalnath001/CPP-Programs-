//friend function as a bridge
#include<iostream>
using namespace std;
class B;//forward declaration
class A{
	private:
		int a;
		public:
			void getData(){
				a=6;
			}
		friend void multi(A,B);
};
class B{
	private:
		int b;
	public:
		void getData(){
			b=7;
		}
		friend void multi(A,B);
};
void multi(A object1,B object2){
	int result=object1.a*object2.b;
	cout<<"Multiplication of "<<object1.a<<" and "<<object2.b<<" is "<<result;
}
int main()
{
	A obj1;
	B obj2;
	obj1.getData();
	obj2.getData();
	multi(obj1,obj2);
	return 0;
}
