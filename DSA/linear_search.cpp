// Find a Number in a Given Array using Linear Search Target Value find krni ha
// Linear Search Algorithem
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,2,3,6,7}; //Unsorted Array
    int n = 5; // Array Ka Size
    int Target = 7; // Jis ko find krna ha searching ke doran target element
    
    bool found = false;  // Flag to check if find or not

    for(int i=0; i<n; i++)
    {
        if(arr[i] == Target)
        {
            found = true;
            cout<<"Element Found at Index :"<< i <<endl;
            break;
        }
    }

    if(!found)
    {
        cout<<"Element Not Found"<<endl;
    }
}