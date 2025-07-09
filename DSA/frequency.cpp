// Find Frequency of a Number in a Given Array
// Frequency: How many Times a Number appear

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,5,6,5,7,5,9};
    int Target = 5;
    int count = 0; // to cound frequency of a target number

    for(int i=0; i<7; i++)
    {
        if(arr[i] == Target)
        {
           count++; // Incrment when when target find hota jai ga
        }

    }
    cout<<"Elements found with: "<<Target<<" frequncy is:"<<count<<endl;
    
}