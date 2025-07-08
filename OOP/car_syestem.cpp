#include<iostream>
using namespace std;

// Car Management Syestem Day : 3
// Static and this keyword usage with practicall car syesteme example


class Car{
	
	private:
		
		string Model;
		int price;
		
	public:
		
		static int carCount;
		
		Car(string Model , int price)
		{
			this->Model = Model;
			this->price = price;
			carCount++;
		}
		
	void Display()
	{
		cout<<"Car Model :"<<Model<<endl;
		cout<<"Car Price :"<<price<<endl;
	}
	
	void ShowCount()
	{
		cout<<"Car Count: "<<carCount<<endl;
	}
	
};

int Car::carCount = 0;

int main()
{
	Car c1("Civic",1024444);
	c1.Display();
	c1.ShowCount();
	
	Car c2("City",103444);
	c2.Display();
	c2.ShowCount();
}