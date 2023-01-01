#include<iostream>
using namespace std;
main(){
float intial_velocity, acceleration, time,final_velocity;
cout<<"Enter Intial velocity:";
cin>>intial_velocity;
cout<<"Enter Acceleration";
cin>>acceleration;
cout<<"Enter Time";
cin>>time;
final_velocity= acceleration * time + intial_velocity;
cout<<"Final velocity:"<<final_velocity;
}