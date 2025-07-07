#include<iostream>
using namespace std;

class Student {
	
	public:
		
		string name;
		int Roll_No;
		float CGPA;
		
	public:
		
		void displayInfo()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll No"<<Roll_No<<endl;
			cout<<"CGPA:"<<CGPA<<endl;
		}
	
};

int main()
{
	Student s1,s2;
	
	s1.name = "ahmad";
	s1.Roll_No = 2380230;
	s1.CGPA = 3.40;

	
	s2.name = "Ali";
	s2.Roll_No = 2383232;
	s2.CGPA = 3.45;
	
	s1.displayInfo();
	s2.displayInfo();
}