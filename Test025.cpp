//Example of this pointer
#include<iostream>
using namespace std;
class Student{
	private:
	int roll;
	string name;
	public:
		void setName(int roll,string name){
			this->roll=roll;
			this->name=name;
		}
		int getRoll(){
			return roll;
		}
		string getName(){
			return name;
		}
};
int main(){
	Student s;
	s.setName(2,"Ram");
	cout<<"Roll No:"<<s.getRoll();
	cout<<"Name:"<<s.getName();
	return 0;
}
