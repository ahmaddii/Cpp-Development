#include<iostream>
using namespace std;

// Find Min and max value

int main()
{
    int arr[] = {23,11,45,6,89,2};
    int min = arr[0];
    int max = arr[0];
    

    for(int i = 0; i<6; i++)
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

    cout<<" Max Value: "<<max<<endl;
    cout<<"Min Value: "<<min<<endl;

    
}