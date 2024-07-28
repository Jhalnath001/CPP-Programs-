//Array of objects
#include<iostream>
using namespace std;
class student{
	private:
		int id;
		string name;
	public:
		void setData(){
			cout<<"Enter id:";
			cin>>id;
			cout<<"Enter Name:";
			cin>>name;
		}
		void display(){
			cout<<"Id:"<<id<<"\t Name:"<<name<<endl;
		}
};
int main(){
	student s[5];
	int i;
	for(i=0;i<5;i++){
		s[i].setData();
	}
	for(i=0;i<5;i++){
		s[i].display();
	}
	return 0;
}
