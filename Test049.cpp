//class and object + access specifier
#include<iostream>
using namespace std;
class School{
	private:
		int code;
		string name;
	public:
		void setData(int c,string n){
			code=c;
			name=n;
		}
		int getCode(){
			return code;
		}
		string getName(){
			return name;
		}
		
		
};
class Student{
	private:
		int roll;
		string name;
	public:
		void setData(int r,string n){
			roll=r;
			name=n;
		}
		int getRoll(){
			return roll;
		}
		string getName(){
			return name;
		}
};
int main()
{
School s1;
s1.setData(101,"GM Birta model");
Student st1;
st1.setData(12,"Ram");
cout<<"Roll Number of"<<st1.getName()<<" is "<<st1.getRoll()<<endl;
cout<<"Code No of school:"<<s1.getCode()<<endl<<"Name of school:"<<s1.getName();
return 0;
}
