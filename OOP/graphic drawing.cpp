#include<iostream>
using namespace std;

// Graphic drawing syestem

class Shape{
	
	public:
       
       virtual void Draw()
       {
       	cout<<"Drawing a Generic Shape !"<<endl;
	   }
	
	
};

class Circle : public Shape{
	
	public:
	
	void Draw()
	{
		cout<<"Drawing a Circle !"<<endl;
	}
	
};

class Rectangle : public Shape{
	
	public:
		
		void Draw()
		{
			cout<<"Drawing a Rectangle !"<<endl;
		}
	
	
};


int main()
{
	
	Shape*s; // create a pointer of base class
	Circle c; // create object for circle
	s = &c; // now point the base pointer to the circle object to call circle function overide
	s->Draw(); // display circle function
	
	
	// now same for rectangle to display the overiding on run time 
	Rectangle r;
	s = &r;
	s->Draw();
	
}