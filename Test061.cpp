//adding distances using friend function
#include<iostream>
using namespace std;
class Distance2;
class Distance1{
	private:
		int feet,inch;
	public:
		void setData(){
			cout<<"Enter feet for distance1:";
			cin>>feet;
			cout<<"Enter inch for distance1:";
			cin>>inch;
		}
		friend void addDistance(Distance1,Distance2);
};
class Distance2{
	private:
		int feet,inch;
		public:
			void setData(){
			cout<<"Enter feet for distance2:";
			cin>>feet;
			cout<<"Enter inch for distance2:";
			cin>>inch;
			}
			friend void addDistance(Distance1,Distance2);
};
void addDistance(Distance1 obj1,Distance2 obj2){
	int feetAdd=obj1.feet+obj2.feet;
	int inchAdd=obj1.inch+obj2.inch;
	if(inchAdd>=12){
		feetAdd++;
		inchAdd-=12;
	}
	cout<<feetAdd<<"ft."<<inchAdd<<"in.";
}
int main(){
	Distance1 d1;
	Distance2 d2;
	d1.setData();
	d2.setData();
	cout<<"----------------------\n";
	addDistance(d1,d2);
	return 0;
}
