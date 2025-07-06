#include<iostream>
using namespace std;

// Copy Constructer: in which more than one constructer comes in the class

class Book{
    
    public:

    string title;
    int price;
          
     // Default Constructer

     Book()
     {
        title = "Unknown",
        price  = 0;
     }
     
     public:

     // Parametrized Constructer

     Book(string t , int p)
     {
        title = t;
        price = p;
     }
     
     void Display()
     {
        cout<<"Title:"<<title<<endl;
        cout<<"Price:"<<price<<endl; 
     }

};


int main()

{
       Book b1;
       Book b2("Rich Dad", 4200);
       
       b1.Display();
       b2.Display();

}