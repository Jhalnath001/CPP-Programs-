//enum in c++
#include<iostream>
using namespace std;
enum direction{
	east=10,west,north,south
};
int main(){
	direction d;
	int num;
	label:
	cout<<"Enter your direction(10,11,12,13):";
	cin>>num;
	d=(direction)num;
	switch(d){
		case east:
			cout<<"East Direction";
			break;
		case west:
			cout<<"West Direction";
			break;
		case north:
			cout<<"North Direction";
			break;
		case south:
			cout<<"South Direction";
			break;
		default:
			cout<<"Wrong Direction";
	}
	cout<<endl;
	goto label;
	return 0;
}
