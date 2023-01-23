#include<iostream>
using namespace std; 
int sumOfNumber(int number);
main()
{
    int number,digit;
    cout<<"Enter number";
    cin>>number;
    cout<<"Sum is "<<sumOfNumber(number);

}
int sumOfNumber(int number)
{
    
    int sum =0;

    while (number%10 != 0 && number>0)
    {
        sum = number%10 + sum;
        number = number /10;

    }
    return sum;
}