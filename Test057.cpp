//static member function
#include<iostream>
using namespace std;
class Car{
	string model;
	static int NumberOfCars;
	public:
		void setModel(string model){
			this->model=model;
			NumberOfCars++;
		}
		static void displayCount(){
			cout<<"Number of cars:"<<NumberOfCars<<endl;
			//cout<<"Model"<<model;//Not allowed to have nonstatic member
		}	
};
int Car::NumberOfCars;//initialize with 0
int main(){
	Car c1,c2,c3;
	c1.setModel("Toyota");
	c2.setModel("Ford");
	c3.setModel("Neta");
	Car::displayCount();
	return 0;
}
