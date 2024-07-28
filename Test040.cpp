//default arguments
#include<iostream>
#include<math.h>
using namespace std;
class Circle{
	public:
		float area(float r,float pi=3.14f){
			return pi*pow(r,2);
		}
};
int main()
{
	float r;
	cout<<"Enter a radius:";
	cin>>r;
	Circle c;
	float area_circle=c.area(r);
	cout<<"Area of circle is:"<<area_circle;
	return 0;
}
