// DSA = Data Structures => is a way of storing data in different ways
// algorithems = is a way of solving problems in different ways
// array implementaion in c++

#include<iostream>
using namespace std;

int main()
{
int array[7];

 for(int i=0; i<7; i++)  // loop chalaya or array ke ander values dali ha cout krke
 {
    cout<<"Enter 7 Numbers:"<<endl;
    cin>>array[i];
 }
 
 // print krwana

 for(int i=0; i<7; i++)
 {
    cout<<"Values in array are:"<<array[i]<<endl;
 }

  return 0;

}

