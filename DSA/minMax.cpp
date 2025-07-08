#include<iostream>
using namespace std;

// Finding Min and Max Number in given array

int main()
{
       int arr[5] = {1,5,3,4,2};

       int max = arr[0]; // initlize ke 0 index max ha
       int min = arr[0]; // initlize ke 0 indedx min ha 

       for(int i= 0; i<5; i++)
       {
       
        if(arr[i] > max)
        {
            max = arr[i];
        }
        
        if(arr[i] < min)
        {
            min = arr[i];
        }
       
    }

    cout<<"Max is :"<<max<<endl;
    cout<<"Min is :"<<min<<endl;
}