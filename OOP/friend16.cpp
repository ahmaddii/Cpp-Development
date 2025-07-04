//Friend Function 
// If you want to access a private member without getter setter internally you can use friend function insdie class to access it

#include<iostream>
using namespace std;


class Box{
	
	private:
		
		int lenght;
		
	public:
		
		Box()
		{
			lenght = 15;
		}
		
	 friend void showLength(Box b); // declare inside class krna ha
	
	
};

void showLength(Box b)
{
	cout<<"Lenght of Box:"<<b.lenght<<endl;
}



int main()
{
	Box b1;
	showLength(b1);
}