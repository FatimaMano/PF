#include<iostream>
using namespace std;
main(){
int number;
int remainder=0;
int sum=0;
cout<<"Enter Number";
cin>>number;
remainder = number % 10;
sum = sum + remainder;
number = number / 10;
remainder = number % 10;
sum = sum + remainder;
number = number / 10;
remainder = number % 10;
sum = sum + remainder;
number = number / 10;
remainder = number % 10;
sum = sum + remainder;
cout<<"Result: "<<sum;


}    