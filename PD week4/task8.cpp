#include<iostream>
using namespace std;
void isEqualto(int x, int y);
main()
{

int num1,num2;

cout<<"Enter first number";
cin>>num1;
cout<<"Enter second number";
cin>>num2;
isEqualto(num1,num2);



}


void isEqualto(int x, int y)
{
if(x == y)
{
cout<<"true";

}
if(x != y)
{
cout<<"false";

}

}