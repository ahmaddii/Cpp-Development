#include<iostream>
using namespace std;

// Destructer in OOP

class Test{
    
    public:

    Test()
    {
        cout<<"Object Created:"<<endl;
    }

     
    // use tilda sign to destroy object when it created to free up space

    ~Test()
    {
        cout<<"Object Destroyed"<<endl;
    }

};

int main()
{
   Test t1;
}