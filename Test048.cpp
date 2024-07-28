//Access Specifiers
#include<iostream>
using namespace std;
class Vehicle{
	private:
		int vehicle_id;
	public:
		string vehicle_name;
	private:
		void setId(int id){
			vehicle_id=id;
		}
	public:	
		void test(int x){
			setId(x);
		}
	void display(){
		cout<<"Vehile Id is:"<<vehicle_id;
		cout<<"Vehicle Name :"<<vehicle_name;
		
	}
};
int main(){
	Vehicle obj;
	obj.test(101);
	obj.vehicle_name="Motorbike";
	obj.display();
	return 0;
	
}
