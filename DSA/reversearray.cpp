// so we have to print reverse array in cpp
#include<iostream>
using namespace std;

int main()
{
    int array[5] = {1,2,3,4,5};

    int Start = 0; // starting index
    int End = 4;

    while(Start < End) // ye tab tak chale jb tak starting value ap ki end se choti hogi
    {    // Swaping Elements
        int temp = array[Start];
        array[Start] = array[End];
        array[End] = temp;
      
    Start++;
    End--;
    
    }


    for(int i=0; i<5; i++)
    {
        cout<<array[i]<<" ";
    }
}

