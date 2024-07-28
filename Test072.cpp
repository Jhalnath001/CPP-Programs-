//addition of time : returning object from function
#include<iostream>
using namespace std;
class Time{
	int hour,min;
	public:
		void setData(){
			cout<<"Enter hour:";
			cin>>hour;
			cout<<"Enter minute:";
			cin>>min;
		}
		void display(){
			cout<<hour<<"hr:"<<min<<"min"<<endl;
		}
		Time add(Time t){
			Time t3;
			t3.hour=hour+t.hour;
			t3.min=min+t.min;
			if(t3.min>=60){
				t3.hour++;
				t3.min-=60;
			}
			return t3;
		}		
};
int main(){
	Time t1,t2,t3;
	t1.setData();
	t2.setData();
	t3=t1.add(t2);
	t3.display();
	return 0;
}
