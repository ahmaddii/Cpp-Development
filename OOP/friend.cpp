// Car Mechanic Software Syestem

#include<iostream>
using namespace std;

class Car {
	
	private:
		
		int enginePower;  // we want only mechanic to access these details
		float milege;
	
	public:
		
		Car()
		{
			enginePower = 1200;
			milege = 4.2;
		}
		
	  friend class Mechanic;
	
	
};

class Mechanic{
	
	public:
		
		void ShowDetails(Car c)
		{
			cout<<"Engine Power:"<<c.enginePower<<endl;
			cout<<"Engine Milege:"<<c.milege<<endl;
		}
	
	
};

int main()
{
	Car c1;
	Mechanic m1;
	m1.ShowDetails(c1);
	
	
}