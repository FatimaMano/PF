#include<iostream>
using namespace std;
main(){
/* Write a C++ program that converts the weights from lbs (Pounds) to kgs(kilograms). 11b = 0.45kgs */
float lb = 0.45;
float weight_kgs;
float Result;
cout<<"Enter weight in kgs";
cin>>weight_kgs;
Result = weight_kgs / lb ;
cout<<"Result  "<<Result;
}
