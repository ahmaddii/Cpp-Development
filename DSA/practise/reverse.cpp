// Reversing Array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    
    int Start = 0;
    int End = 4;

    while (Start < End)
    {
         int temp = arr[Start];
         arr[Start] = arr[End];
         arr[End] = temp;

         Start++;
         End--;
    }
    
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" "; 
    }

}