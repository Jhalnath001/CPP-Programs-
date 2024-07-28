//Dynamic Memory Allocation and Deallocation
#include<iostream>
using namespace std;
int main(){
	int i;
	int *ptr=new int[5];
	cout<<"Enter data:"<<endl;
	for(i=0;i<5;i++){
		cin>>ptr[i];
	}
	//display
	cout<<"Data in array are:";
	for(i=0;i<5;i++){
		cout<<ptr[i]<<"\t";
	}

	delete[] ptr;
	cout<<endl<<"Memory Released"<<endl;
	
	cout<<"Data in array after deletion are:"<<endl;
	for(i=0;i<5;i++){
		cout<<ptr[i]<<"\t";
	}
	
	return 0;
}
