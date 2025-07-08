#include<iostream>
using namespace std;

class Book{
	
	private:
		
		string title;
		string author;
		int price;
		
	public:
		
	Book(string t , string a , int p) // parametrized constructer
	{
		title = t;
		author = a;
		price  = p;
	}
	
	void display()
	{
		cout<<"Book Title: "<<title<<endl;
		cout<<"Book Author: "<<author<<endl;
		cout<<"Book Price: "<<price<<endl;
	}
	
};

int main()
{
	Book b1("Long Night" ,"ahmad",2300);
	b1.display();
	Book b2("Rich Dad","ali",4000);
	b2.display();
}