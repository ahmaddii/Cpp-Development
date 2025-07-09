#include<iostream>
using namespace std;

// Finding a Numer using linear search

int main()
{
    int arr[] = {2, 4, 5, 4, 6, 4, 9};
    
    int Target = 4;

    int n = 7;

    bool found = false;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == Target)
        {   
            found = true;
            cout<<"Element Found at index number :"<<i<<endl;
            break;
        }
    }
    
    if(!found)
    {
        cout<<"Target is not found:"<<endl;
    }

}