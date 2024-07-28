//array in c++
#include<iostream>
using namespace std;
int main(){
	int arr[5],i;
	cout<<"Enter data in an array\n";
	for(i=0;i<5;i++){
		cout<<"Enter Element["<<i<<"]:";
		cin>>arr[i];
	}
	cout<<"Elements in an array\n";
	cout<<"====================\n";
	for(i=0;i<5;i++){
		cout<<"Element["<<i<<"]:"<<arr[i]<<endl;
	}
	return 0;
}
