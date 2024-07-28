//static data member example
#include<iostream>
using namespace std;
class test
{
private:
 static int count; 
 int m_nID;
public:
 void Getdata(int a) // function defined inside the class
 {
 m_nID = a;
 count++;
 }
void GetCount(void)
 {
 cout<<"Count is: " <<count <<endl;
 }
};
int test::count=0; // initialization of static data member.
int main()
{
test cFirst, cSecond, cThird; // objects are created, count is initialized to 0.
cout<<" Before reading data: " << endl;

 cFirst.GetCount();
 cSecond.GetCount(); // display count
 cThird.GetCount();

cout<<" Reading data..... " << endl;

cFirst.Getdata(120);
 cSecond.Getdata(23); // getting data into objects
 cThird.Getdata(11);

cout<<" After reading data: "<< endl;

 cFirst.GetCount();
 cSecond.GetCount(); // display count
 cThird.GetCount(); 
 return 0;
}

