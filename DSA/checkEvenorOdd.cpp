// Checking the Even or Odd Number

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);


    cout<<"\n Even Numbers are :"<<endl;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout<<arr[i]<<" ";
        }
    }

    cout<<"\n Oddd Numbers are:"<<endl;

    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            cout<<arr[i]<<" "; 
        }
    }
}