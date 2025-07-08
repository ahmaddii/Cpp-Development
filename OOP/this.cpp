#include<iostream>
using namespace std;

// This  keyword is used to avoid confusion between class variabls and function parameter variables

class Student{
	
	public:
		string name;
		
	public:
		
	Student(string name)
	{
		this->name = name;
	}
	
	void Display()
	{
		cout<<"Name:"<<name<<endl;
	}
	
};



int main()
{
  Student s1("Ahmad");
  s1.Display();
}