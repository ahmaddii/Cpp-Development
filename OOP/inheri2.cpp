#include<iostream>
using namespace std;

class Person{
    
    public:

       Person()
       {
        cout<<"Person Constructer"<<endl;
       }
};

class Student : public Person{
   
    public:

    Student()
    {
        cout<<"Student Constructer Called:"<<endl;
    }


};


int main()
{
   Student s1;
}