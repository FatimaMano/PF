#include<iostream>
using namespace std;
main()
{
    int arraysize;
    cout<<"Enter the array size";
    cin>> arraysize;
    int number[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout <<"Enter value";
        cin>>number[idx];
    }
    for (int idx = arraysize-1; idx >= 0; idx--)
    {
        cout <<number[idx]<<" ";
    }
}