#include<iostream>
using namespace std;
int triangle(int number);
main()
{
    int number;
    cout<<"Enter the number";
    cin>>number;
    cout<<triangle(number);

    
}
int triangle(int number)
{
    int sum=0;
    for(int i=number;i>=1;i--)
    {
        sum +=i;
    }
    return sum;
}