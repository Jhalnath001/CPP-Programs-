//Friend function
#include<iostream>
using namespace std;
class Example2;// forward declaration
class Example1{
	private:
		int a;
	public:
	void getData(){
		cout<<"Enter a:";
		cin>>a;
	}
	friend void sum(Example1,Example2);
};
class Example2{
	private:
		int b;
	public:
	void getData(){
		cout<<"Enter b:";
		cin>>b;
	}
	friend void sum(Example1,Example2);
};
void sum(Example1 e1,Example2 e2){
	cout<<"Sum of "<<e1.a<<" and "<<e2.b<<" is "<<e1.a+e2.b<<endl;
}
int main(){
	Example1 obj1;
	Example2 obj2;
	obj1.getData();
	obj2.getData();
	sum(obj1,obj2);
	return 0;
	
}
