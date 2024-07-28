//Access specifier
#include<iostream>
using namespace std;
class Vehicle{
	private:
		string model_no;
		string type;
	public:
		void setData(string m,string t){
			model_no=m;
			type=t;
		}
		string getModel(){
			return model_no;
		}
		string getType(){
			return type;
		}
		
};
int main()
{
	Vehicle v;
	v.setData("A001","Car");
	cout<<"Model number is:"<<v.getModel()<<endl;
	cout<<"Type of vehicle is:"<<v.getType();
	return 0;	
}
