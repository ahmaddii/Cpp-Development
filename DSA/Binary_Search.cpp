// Binary Search Algorithem apply only on Sorted Array
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,9,12,15,18,20}; // Found at 4 index
    int n = 6;
    int Target = 18;
    int left = 0, Right = n - 1;
    
    while(left <= Right)
    {
        int mid = (left + Right) / 2;

        if(arr[mid] == Target)
        {
            cout<<"Element found at index: "<< mid <<endl;
            break;
        }
        else if(arr[mid] < Target)
        {
            left = mid + 1;
        }
        else{
            Right = mid - 1; // at this point after mid we find our sorted array target value in binary search algorithem
    }
}
}