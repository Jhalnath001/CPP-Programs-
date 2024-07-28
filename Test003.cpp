//custom namespace demo
#include<iostream>
using namespace std;
namespace A{
void test(){
cout<<"This is test() from A";	
}
}
namespace B{
void test(){
cout<<"This is test() from B";	
}
}
int main()
{
	B::test();
	return 0;	
}
