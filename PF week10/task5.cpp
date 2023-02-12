#include<iostream>
using namespace std;
main()
{
    int arraysize;
    cout<<"Enter the number of boxes";
    cin>>arraysize;
    int sideLength[arraysize];
    for(int idx=1;idx<arraysize;idx++)
    {
        cout<<"Enter the side length";
        cin>>sideLength[idx];
    }
    int sum=0;
    for(int i=1;i<arraysize;i = i+2)
    {
        sum += sideLength[i] * sideLength[i+1] * sideLength[i+2];
    }
    cout<<"Volume = "<<sum;
}