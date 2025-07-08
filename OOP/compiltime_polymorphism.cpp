#include<iostream>
using namespace std;

// function overloading 
// there are two types of polymorphism 
// 1: compile time polymorphism it has function overloading : function of same name but different parameters
// 2: RunTime polymorphsim : function overriding

class Calculater
{
	
	public:
		
		void add(int a , int b)
		{
			cout<<"Sum: "<<a+b<<endl;
		}
		
	public:
		
		void add(double a , double b)
		{
			cout<<"Sub:"<<a+b<<endl;
		}
		
	
};

int main()
{
	Calculater c1;
	c1.add(4,5);
	c1.add(33.33,566.77);

}