//Returning object from function
#include<iostream>
using namespace std;
class Book{
	private:
		int id;
		string name;
	public:
		void setData(){
			cout<<"Enter id:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
		}
		void display(){
			cout<<"Book Id:"<<id<<"\tBook Name:"<<name<<endl;
		}
		friend Book update(Book& obj);
};
Book update(Book& obj){
	obj.id=105;
	obj.name="Web Technology";
	return obj;
}
int main(){
	Book obj,obj1;
	obj.setData();
	obj.display();
	obj1=update(obj);
	obj1.display();
	return 0;
}
