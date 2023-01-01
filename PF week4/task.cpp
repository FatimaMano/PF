#include<iostream>
using namespace std;
void add(int number1,int number2);
void mul(int number1,int number2);
void sub(int number1,int number2);
void division(float number1,float number2);
main()
{
int num1,num2;
char operation;



while(true)
{
cout<<"Enter first number";
cin>>num1;
cout<<"Enter second number";
cin>>num2;
cout<<"Enter operation +,*,-,/";
cin>>operation;

if(operation == '+')
{
 add(num1,num2);
}
if(operation == '*')
{
 mul(num1,num2);
}
if(operation == '-')
{
 sub(num1,num2);
}
if(operation == '/')
{
 division(num1,num2);
}

}





}


void add(int number1,int number2)
{

 int sum;
 sum = number1 + number2;
 cout<<"sum is "<<sum<<endl;



}

void mul(int number1,int number2)
{

 int mul;

 mul = number1 * number2;
 cout<<"Product is "<<mul<<endl;



}

void sub(int number1, int number2)
{
 
int subtraction = number1 - number2;
cout<<"Subtraction is"<<subtraction<<endl;

}


void division(float number1,float number2)
{

float division;
division = number1 / number2;
cout<<"Division is"<<division<<endl;

}