#include<iostream>
using namespace std;

// Runtime plymorphism
// use virtual in Animal class function virtual keyword is used for overriding between base class functions and derived class functions 

class Animal{
	
	public:
		
		virtual void Speak()
		{
			cout<<"Animal Speak !"<<endl;
		}
	
	
};

class Dog : public Animal{
	
	public:
		
		void Speak()
        {
         cout<<"Dog Barks !"<<endl;	
		}	
	
};

int main()
{
	Animal*a; // Pointer of base class which calls the derived methods
	Dog d;  // dog object
	a = &d; // base class points to the dog wala speak function
	
	a->Speak(); // runtime decide which to call 
}



