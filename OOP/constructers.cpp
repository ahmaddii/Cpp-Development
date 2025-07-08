#include<iostream>
using namespace std;

class Student{
	
	public:
		
		string name;
		int RollNo;
		
   //		Student() // constructer 
	//	          // name is as same as class and call automatically when objects is created	{
	//		cout<<"Constructer Called "<<endl;
	//	}
	
	Student(string n , int r) // Parametrized Constructer
	{
		name = n;
		RollNo = r;
	}
	
	void Display()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Roll No:"<<RollNo<<endl;
	}
		
	
};

int main()
{
	Student s1("Ahmad",18);
	s1.Display();
}