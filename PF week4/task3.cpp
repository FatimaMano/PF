#include<iostream>
using namespace std;
void isEven(int num);
main()
{
int number;
while(true)
{
cout<<"Enter number";
cin>>number;
isEven(number);
}





}
void isEven(int num)
{

if(num % 2 == 0)
{
  cout<<num<<" is a even number"<<endl;
}

if(num % 2 != 0)
{
  cout<<num<<" is a odd number"<<endl;
}





}