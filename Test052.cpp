//defining member function outside of the class
#include<iostream>
using namespace std;
class Teacher{
	int t_id;
	string t_name;
	public:
		void setData();
		void DisplayData();
};
void Teacher::setData(){
	t_id=101;
	t_name="Jhalnath";
}
void Teacher::DisplayData(){
	cout<<"Teacher Id:"<<t_id<<endl;
	cout<<"Teacher Name:"<<t_name;
}
int main(){
	Teacher obj;
	obj.setData();
	obj.DisplayData();
	return 0;
}
