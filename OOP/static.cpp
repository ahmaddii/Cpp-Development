#include<iostream>
using namespace std;

// Static variable is just like a class in which a students every student have access to the white  board or duster
// it is shared variable so every time change when Object is created

class Student{
	
	public:
	
	static int count;
	
	public:
		
	 Student()
	 {
	 	count++; // shared variable or static so change hoga jese jese objects create honge sai ha 
	 }
	 
	
};

int Student::count = 0;

int main()
{
	Student s1 , s2 ,s3 , s4;
	cout<<Student::count<<endl;
}