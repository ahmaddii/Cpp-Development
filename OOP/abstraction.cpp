// what is Abstraction or Pure Virtual Function basically you 
// are hiding unnesscary details and just show the features for example you hide the how car engine works and just present the pedal or steering
#include<iostream>
using namespace std;

class Shape{
	
	public:
	
	virtual void Draw() = 0; // abstract class pure virtual function has no body so in this it works as blue print for classes
	
	
	
};

class Circle : public Shape{
	
	public:
	
	void Draw()
	{
		cout<<"Drawing Circle Shape:"<<endl;
	}
	
};

class Rectangle : public Shape{
	
	public:
	
	void Draw()
	{
		cout<<"Drawing Rectangle Shape:"<<endl;
	}
	
};

int main()
{
	Shape* s; // creating base class pointer 
	Circle c1; // creating circle obb
	s = &c1;  // pointing the base class to circle class
	s->Draw(); // calling draw function using base
	
	Rectangle r1;
	s = &r1;
	s->Draw();
}

