#include<iostream>
using namespace std;
int calculateGCD(int number1,int number2);
int calculateLCM(int number1,int number2,int gcd);
main()
{
    int number1,number2;
    cout<<"Enter first number";
    cin>>number1;
    cout<<"Enter second number";
    cin>>number2;
    int GCD = calculateGCD(number1,number2);
    int LCM = calculateLCM(number1,number2,GCD);
    cout<<"GCD is "<<GCD;
    cout<<"LCM is"<<LCM;

}
int calculateGCD(int number1,int number2)
{
    int smallest_number=0;
    int gcd=0;
    if(number1 < number2)
    {
        smallest_number = number1;  
    }
    else
    {
        smallest_number = number2;
    }
    for(int count =1;count<=smallest_number;count++)
    {
        if(number1%count == 0 &&number2%count == 0)
        {
            gcd = count;
        } 
    }
    return gcd;
    

}
int calculateLCM(int number1,int number2,int gcd)
{
    int LCM = (number1*number2)/calculateGCD(number1,number2);
    return LCM;

}
