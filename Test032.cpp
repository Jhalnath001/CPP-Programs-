//class and object
#include<iostream>
using namespace std;
class Teacher{
	private:
		int teacher_id;
		string teacher_name;
		float teacher_salary;
	public:
		void setData(int t_id,string t_name,float t_sal){
			teacher_id=t_id;
			teacher_name=t_name;
			teacher_salary=t_sal;
		}
		int getId()
		{
			return teacher_id;
		}
		string getName(){
			return teacher_name;
		}
		float getSalary(){
			return teacher_salary;
		}
		
		
};
int main(){
	Teacher t;
	t.setData(101,"Laxman",45534.50f);
	cout<<"Teacher Id is:"<<t.getId()<<endl;
	cout<<"Teacher Salary:"<<t.getSalary()<<endl;
	return 0;
}
