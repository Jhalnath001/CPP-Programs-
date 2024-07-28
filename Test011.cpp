//operator: ternary
#include<iostream>
using namespace std;
typedef int k;
int main(){
	k a,b,c,d;
	cout<<"Enter a,b and c:";
	cin>>a>>b>>c;
	d=(a>b)?a:b;
	(c>d)?cout<<c<<" is greatest":cout<<d<<" is greatest";
	return 0;
}
