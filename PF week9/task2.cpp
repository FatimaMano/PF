#include <iostream>
using namespace std;
main()
{
    int arraysize;
    cout<<"Enter the array size";
    cin>> arraysize;
    int number[arraysize];
    int sum=0;
    int average=0;
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout <<"Enter value";
        cin>>number[idx];
        sum += number[idx];
    }
    average = sum / arraysize;
    cout<<"Sum of "<<arraysize<< " is "<<sum<<endl;
    cout<<"Average of "<<arraysize<< " is "<<average<<endl;
}