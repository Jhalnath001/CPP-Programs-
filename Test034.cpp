//enum in c++
#include<iostream>
using namespace std;
enum color{
	red,green=96,blue
};
//here value of red is 0, green is 96 and blue is 97
int main(){
	color c;
	int n;
	cout<<"Enter your color:";
	cin>>n;
	c=(color)n;
	switch(c){
		case red:
			cout<<"Red is selected";
			break;
		case green:
			cout<<"Green is selected:"<<green;
			break;
		case blue:
			cout<<"Blue is selected";
			break;
		default:
			cout<<"Unknown color is selected";	
	}
	return 0;
}
