// Copy Constructrer = kya krta existing object jo bn gaya ha us ko copy krke new bnata ha

#include<iostream>
using namespace std;

class Laptop{
    
    public:      
       
       string name;
       int price;

     // parametrized construcer

     Laptop(string n , int p)
     {
        name = n;
        price = p;
     }

     // now use copy construcer to copy the existing object

     Laptop(const Laptop &b)
     {
        name = b.name;
        price = b.price;
     }

    ~Laptop()
    {
        cout<<"Memory Now Free from Objects"<<endl;
    }


     void Display()
     {
        cout<<"Laptop Name:"<<name<<endl;
        cout<<"Laptop Price:"<<price<<endl;
     }

};


int main()
{
    Laptop l1("MacBook m1", 422000);
    l1.Display();
    Laptop l2 = l1;
    l2.Display(); 

}