#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter number";
    cin>>number;
    int count_length =0;

    while (number%10 != 0 && number>0)
    {
        number = number /10;
        count_length +=1;

    }
    cout<<count_length;
    
}