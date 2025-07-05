#include<iostream>
using namespace std;

// Inheritence construcer in which base class constructer runs first and then derived runs

class Person{
    
    public:
             // base class parametrized Constructer
             Person(string name , int roll)
             {
                 cout<<"Name:"<<name<<endl;
                 cout<<"Roll No:"<<roll<<endl;
             }


};


class Student : public Person{
     
    public: 
            Student(string name , int roll , int age) : Person(name , roll) // inherit base construcer
            {
                cout<<"Age:"<<age<<endl;
            }


};

int main()
{
   Student s1("ahmad",143,20);
}