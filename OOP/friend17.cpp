// Friend Class : => is e.g If student is the class and its marks are private student has friend only teacher so teacher only access to its details because they are now friend
#include<iostream>
using namespace std;

class Student{
	
	private:
		
		string name;
		int marks;
	
	public:
		
		Student()
		{
			name = "Ahmad";
			marks = 95;
		}
	
	// now student keh rha mera dost ha teahcer so us ko meri details access krne do
	
	friend class Teacher;
};

class Teacher{
	
	public:   // now we declare function for teacher class to access the student details becuase they allow me that you are my friend
		
		void CheckDetails(Student s)
		{
			cout<<"Student Name:"<<s.name<<endl;
			cout<<"Student Marks:"<<s.marks<<endl;
		}
	
};

int main()
{
	Student s1;
	Teacher t1;
	t1.CheckDetails(s1);
}