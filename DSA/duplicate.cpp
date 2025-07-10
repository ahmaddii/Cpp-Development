// Finding the Duplicate Numbers in an Array
#include<iostream>
using namespace std;


int main()
{
    int arr[] = {1,2,2,3,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Duplicate Numbers are:"<<endl;

    for(int i = 0; i<n; i++)
    {
        bool isDuplicate = false;

        for(int j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
      
        if(isDuplicate)
        {
            cout<<arr[i]<<" ";
        }

    }

}