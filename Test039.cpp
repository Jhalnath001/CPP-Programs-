//function overloading
#include<iostream>
using namespace std;
class Addition{
	public:
		int add(int a, int b){
			return a+b;
		}
		float add(float x,float y,float z){
			return x+y+z;
		}
};
int main(){
	Addition obj;
	float res1=obj.add(4.8f,5.8f,2.4f);
	cout<<"Sum of floating point numbers:"<<res1<<endl;
	int res2=obj.add(4,5);
	cout<<"Sum of integer numbers:"<<res2<<endl;
	return 0;
}
