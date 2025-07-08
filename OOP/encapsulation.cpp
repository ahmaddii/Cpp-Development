// Encapsulation
// 1: Data Binding , Security purposes ki waja se details hidden krlete hain or just user ko jo chaye wo display krwate hain
// it is done thourgh private if you want to access an encapsulate class than you have to access it though getter setter

#include<iostream>
using namespace std;

class Person{
	
	private:
		// now they are encapsulate
		string name;
		int age;
	
	public:
	
	// use setter to set values using public method
	
	void SetDetails(string n , int a)
	{
		name = n;
		age  = a;
	}
	
	// now use getter to display
	
	void Display()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
	}
	
};

int main()
{
	Person p1;
	p1.SetDetails("Ahmad",20);
	p1.Display();
	
}