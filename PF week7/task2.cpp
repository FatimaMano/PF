#include<iostream>
using namespace std;
main()
{
    int length_of_series;
    cout<<"Enter the length of series";
    cin>>length_of_series;
    int num1 = 0,num2 = 1,next_number=0;
    cout<<num1<<","<<num2;
    for(int count=1;count<=length_of_series-2;count++)
    {
        next_number = num1 + num2;
        cout<<","<<next_number;
        num1 = num2;
        num2 = next_number;
        
        
    }
}