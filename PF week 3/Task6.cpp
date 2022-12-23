#include<iostream>
using namespace std;
main()
{
int intermediate;
int Total_intermediate = 1100;
int Total_Matric = 1100;
int Matric;
int T_Ecat= 400;
int ecat;
float Aggregate;

cout<<"Enter Intermedite Marks";
cin>>intermediate;
cout<<endl<<"Enter  Matric Marks";
cin>>Matric;
cout<<endl<<"Enter ecat Marks";
cin>>ecat;

float I_percentage =  intermediate /Total_intermediate;
float M_percentage= Matric/Total_Matric;
float Ecat_Percenatage = ecat/T_Ecat ;


float intermediate_weightage = 0.4 * I_percentage;
float Ecat_weightage = 0.5 * Ecat_Percenatage;
float Matric_weightage = 0.1  *  Ecat_Percenatage;
Agggregate = intermediate_weightage + Ecat_weightage + Matric_weightage;
cout<<"Agggregate is:"<<Agggregate;






}
