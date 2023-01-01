#include<iostream>
#include<windows.h>
using namespace std;
void printMenu();
void calculateAggregate(string name,int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string nameStd1, int ecatMarkStd1, string nameStd2, int ecatMarkStd2);
main()
{
/* Declaring all the variables*/
string nameStd1,nameStd2;
int matricMarkstd1, matricMarkstd2;
int interMarkstd1, ecatMarkStd1;
int interMarkstd2, ecatMarkstd2;
char c;
int choice;
/*The loop will help to iterate it to facilitate the user to enter details again*/
while(true)
{
system("cls");
printMenu();
cout<<"Enter choice";
cin>>choice;
if(choice == 1)
{

cout<<"Enter name of the first student";
cin>>nameStd1;
cout<<"Enter matric marks";
cin>>matricMarkstd1;
cout<<"Enter inter marks";
cin>>interMarkstd1;
cout<<"Enter ecat marks";
cin>>ecatMarkstd1;
cout<<"Press any key to continue";
cin>>c;




}
if(choice == 2)
{
cout<<"Enter name of the first student";
cin>>nameStd2;
cout<<"Enter matric marks";
cin>>matricMarkstd2;
cout<<"Enter inter marks";
cin>>interMarkstd2;
cout<<"Enter ecat marks";
cin>>ecatMarkstd2;
cout<<"Press any key to continue";
cin>> c;




}
if(choice == 3)
{

calculateAggregate( nameStd1,matricMarkstd1, interMarkstd1, ecatMarkstd1);
cout<<"Press any key to continue";

}
if(choice == 4)
{

calculateAggregate( nameStd2, matricMarkstd2, interMarkstd2, ecatMarkstd2);
cout<<"Press any key to continue";
cin>> c;

}
if(choice == 5)
{

compareMarks(nameStd1, ecatMarkstd1, nameStd2,ecatMarksStd2);
cout<<"Press any key to continue";
cin>> c;
}
}

}
void printMenu()
{
cout<<"******************************************************************************************************"<<endl;
cout<<"*                                                                                                    *"<<endl;
cout<<"*                                                                                                    *"<<endl;
cout<<"*                                                                                                    *"<<endl;
cout<<"*                                                                                                    *"<<endl;
cout<<"*                                     .... UET Lahore ....                                           *"<<endl;
cout<<"*                                                                                                    *"<<endl;
cout<<"*                                                                                                    *"<<endl;
cout<<"*                                                                                                    *"<<endl;
cout<<"*                       													                            *"<<endl;
cout<<"******************************************************************************************************"<<endl;
cout<<"                          "<<endl;
cout<<"                          "<<endl;
cout<<"                          "<<endl;
cout<<"                          "<<endl;
cout<<"                          "<<endl;
cout<<"                          "<<endl;
cout<<"                          "<<endl;
cout<<"                          "<<endl;
cout<<"                  ...........................................Welcome to Uet Lahore.................                         "<<endl;
cout<<"Enter 1 to enter details of first student"<<endl;
cout<<"Enter 2 to enter details of second student"<<endl;
cout<<"Enter 3 to calculate aggregate of first student"<<endl;
cout<<"Enter 4 to calculate aggregate of first student"<<endl;
cout<<"Enter 5 to display a comparison with Rollnumber 01!"<<endl;


}
void calculateAggregate(string name,int matricMarks, int interMarks, int ecatMarks)
{
float aggregate = (matricMarks/1100) * 0.3 + (interMarks/550) * 0.3 + (ecatMarks/400) * 0.4;
cout<<name<<" aggregate is "<<aggregate;



}
void compareMarks(string nameStd1, int ecatMarkStd1, string nameStd2, int ecatMarkStd2)
{
if(ecatMarkStd1 > ecatMarkStd2)
{
cout<<"Roll number 1 is"<<nameStd1<<endl;

}
if(ecatMarkStd2 > ecatMarkStd1)
{
cout<<"Roll number 1 is"<<nameStd2<<endl;

}





}