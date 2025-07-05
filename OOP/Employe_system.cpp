#include<iostream>
using namespace std;

// Employe Managment Syestem  => Constructe Inheritence

class Person{

    public:
       
    Person(string name , int age)
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }


};

class Employe : public Person{

    public:
    
    // Derived constructer with its own attributes and also inheriting the base class

     Employe(string name ,int age , int Emp_Id , float Emp_Salary) : Person(name ,age)
      {
        cout<<"Emp Id:"<<Emp_Id<<endl;
        cout<<"Emp Salary:"<<Emp_Salary<<endl;
      }
};

class Manager : public Employe{

   public:

    Manager(string name , int age , int Emp_Id , float Emp_Salary, string Department) : Employe(name , age, Emp_Id ,Emp_Salary)
    {
        cout<<"Department :"<<Department<<endl;
    }
};

int main()
{
     Manager m1("Ahmad",20,1,40000,"Software Engineering"); // creating derived object will also called parent one

     return 0;
}