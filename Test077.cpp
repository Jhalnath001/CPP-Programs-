//addition of distances: returning object
#include<iostream>
using namespace std;
class Distance{
	int m,cm;
	public:
		void setData(){
			cout<<"Enter distance in meter:";
			cin>>m;
			cout<<"Enter distance in cm:";
			cin>>cm;
		}
		void display(){
		cout<<m<<"m "<<cm<<"cm"<<endl;
	}
	Distance add(Distance obj){
		Distance sum;
		sum.m=m+obj.m;
		sum.cm=cm+obj.cm;
		if(sum.cm>=100){
			sum.m++;
			sum.cm-=100;
		}
		return sum;
	}
};
int main()
{
	Distance d1,d2,d3;
	cout<<"Enter distance in first object"<<endl;
	d1.setData();
	cout<<"Enter distance in second object"<<endl;
	d2.setData();
	cout<<"===============\n";
	d3=d1.add(d2);
	d3.display();
	return 0;
}
