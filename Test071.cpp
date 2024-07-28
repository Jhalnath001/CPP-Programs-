//addition of two complex number
#include<iostream>
using namespace std;
class Complex{
private:
	int r,i;
public:
	void setData(){
		cout<<"Enter real part:";
		cin>>r;
		cout<<"Enter imaginary part:";
		cin>>i;
	}
	void display(){
		cout<<r<<"+"<<i<<"i"<<endl;
	}
	friend Complex add(Complex,Complex);
};
Complex add(Complex c1,Complex c2){
	Complex c3;
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	return c3;
}
int main(){
	Complex obj1,obj2;
	obj1.setData();
	obj2.setData();
	obj1.display();
	obj2.display();
	obj1=add(obj1,obj2);
	cout<<"------------------\n";
	obj1.display();
	return 0;
}
