//example of custom namespace and its use
#include<iostream>
namespace one{
	void print(){
		std::cout<<"Hello World\n";
	}
}
namespace two{
	void print(){
		std::cout<<"Hello BCA II\n";
	}
}
using namespace one;
int main()
{
	print();
	print();
	print();
	return 0;
}
