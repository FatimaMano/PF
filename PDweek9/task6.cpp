#include<iostream>
using namespace std;
main()
{
    int arraysize;
    cout<<"Enter the size of the array";
    cin>>arraysize;
    int arraynumber[arraysize],number_of_times;
    cout<<"Enter the number of times you want to perform even-odd transformation";
    cin>>number_of_times;
    for(int idx =0;idx<arraysize;idx++)
    {
        cout<<"Enter the number";
        cin>>arraynumber[idx];
    }
    number_of_times = number_of_times * 2;
    for(int idx = 0;idx<arraysize;idx++)
    {
        if(arraynumber[idx]%2==0)
        {
            arraynumber[idx] = arraynumber[idx] - number_of_times;
        }
        else if(arraynumber[idx]%2==1)
        {
            arraynumber[idx] = arraynumber[idx] + number_of_times;
        }
    }
    for(int idx =0;idx<arraysize;idx++)
    {
        cout<<arraynumber[idx]<<" ";
    }

    
    
}