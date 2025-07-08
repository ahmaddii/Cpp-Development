#include<iostream>
using namespace std;

// Inheritaence use base or derived classes is to resuse the code

class Vechile{
	
	public:
		
		string Brand;
		int wheels;
		
	public:
		
		Vechile(string Brand , int wheels)
		{
			this->Brand = Brand;
			this->wheels = wheels;
		}
		
		void DisplayInfo()
		{
			cout<<"Car Brand:"<<Brand<<endl;
			cout<<"Car Wheels:"<<wheels<<endl;
		}
	
};

class Car : public Vechile{
	
	public:
		
		string model;
		int price;
		
	public:
	
	// constructer inheritence
	
	Car(string Brand , int wheels , string model , int price) : Vechile(Brand , wheels)	
	{
		this->model = model;
		this->price = price;
	}
	
	public:
		
		void displayCarInfo()
		{
			cout<<"Model:"<<model<<endl;
			cout<<"Price:"<<price<<endl;
		}
	
	
};

int main()
{
	Car c1("Toyota",4,"honda",555550);
	c1.DisplayInfo();
	c1.displayCarInfo();
	
}