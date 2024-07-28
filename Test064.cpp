//friend function which is inside another class
#include<iostream>
using namespace std;
class B;
class A{
public:
void setData(B& obj);
};
class B{
private:
	int privateData;
	public:
	void accept(){
		privateData=10;
	}
	friend void A::setData(B&);
};
void A::setData(B& obj){
			obj.privateData=10;
			cout<<"Private data of class B:"<<obj.privateData;
	}

int main(){
	A obj1;
	B obj2;
	obj1.setData(obj2);
	return 0;
}
