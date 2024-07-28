//inline function
#include<iostream>
using namespace std;
inline int square(int x){
	return x*x;
}
int main(){
	cout<<"Square of 5 is:"<<square(5)<<endl;
	cout<<"Square of 6 is:"<<square(6)<<endl;
	cout<<"Square of 7 is:"<<square(7)<<endl;
	cout<<"Square of 8 is:"<<square(8)<<endl;
	cout<<"Square of 9 is:"<<square(9)<<endl;
	return 0;
}
