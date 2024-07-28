//Dynamic Memory Allocation
#include<iostream>
using namespace std;
int main(){
	int *ptr,i;
	ptr=new int[5];//Allocates memory for an array of 5 integers dynamically on the heap. 'ptr' now points to the first element of this array.
	for(i=0;i<5;i++){
		cin>>ptr[i];
	}
	for(i=0;i<5;i++){
		cout<<ptr[i]<<"\t";
	}
	return 0;
}
