#include<iostream>
using namespace std;
main(){
int Subject1, Subject2,Subject3, Subject4,Subject5,percentage;
int name,total_Marks=500,obtained_marks;
cout<<"Enter your Name:";
cin>>name;
cout<<"Enter Subject 1 marks:";
cin>>Subject1;
cout<<"Enter Subject 2 marks:";
cin>>Subject2;
cout<<"Enter Subject 3 marks:";
cin>>Subject3;
cout<<"Enter Subject 4 marks:";
cin>>Subject4;
cout<<"Enter Subject 5 marks:";
cin>>Subject5;
obtained_marks =  Subject1 + Subject2 + Subject3 + Subject4 + Subject5;
percentage = obtained_marks/total_Marks;
cout<<"Your percentage:"<<percentage;




}