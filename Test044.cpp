//function overloading
#include<iostream>
using namespace std;
class Calculator{
	public:
		int add(int a,int b){
			return a+b;
		}
		double add(double a,double b)
		{
			return a+b;
		}
		int add(int a,int b,int c){
			return a+b+c;
		}
};
int main(){
	Calculator obj;
	cout<<"Sum of 2 integers:"<<obj.add(12,90)<<endl;
	cout<<"Sum of 2 doubles:"<<obj.add(5.67,9.87)<<endl;
	cout<<"Sum of 3 integers:"<<obj.add(12,14,19);
	return 0;
}
