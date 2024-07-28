//private access specifier
#include<iostream>
using namespace std;
class Hotel{
	private:
		int room_no;
		float price;
	public:
	void setRoomDetails(){
		room_no=6;
		price=2000;
	}
	void display(){
		cout<<"Room No:"<<room_no<<endl;
		cout<<"Price:"<<price;
	}
};
int main(){
	Hotel obj;
	obj.setRoomDetails();
	obj.display();
	return 0;
}
