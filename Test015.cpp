//preprocessor directive example
#include<iostream>
using namespace std;
#define apple cout<<"Apple";
int main(){
	apple;
	cout<<"Always executed";
	#ifdef apple
		cout<<"Macro is defined";
	#endif
	
	return 0;
}
