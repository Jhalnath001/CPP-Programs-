//Example of static data member
#include<iostream>
using namespace std;
class Bank{
	private:
		long long accountNo;
		string name;
		static float rateOfInterest;
	public:
		void saveData(long long a,string n){
			accountNo=a;
			name=n;
		}
		void display(){
			cout<<"Account Number:"<<accountNo<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Rate Of Interest:"<<rateOfInterest<<endl;
		}
		
};
float Bank::rateOfInterest=7.5f;
int main(){
	Bank b[3];
	long long ac_no;
	string name;
	int i;
	for(i=0;i<3;i++){
	cout<<"Enter account number:";
	cin>>ac_no;
	cout<<"Enter Name:";
	cin>>name;
	b[i].saveData(ac_no,name);
	}
	for(i=0;i<3;i++){
		b[i].display();
	}
}
