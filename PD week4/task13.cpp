#include<iostream>
using namespace std;
main()
{
int number_of_holidays;
cout<<"Enter the number of holidays";
cin>>number_of_holidays;
int working_days = 365 - number_of_holidays;
int time_for_games = (working_days * 63 + number_of_holidays *  127);
int norm_of_games = 30000;
int difference;
if(time_for_games > norm_of_games)
{

difference = time_for_games  - norm_of_games;

}
if(norm_of_games >  time_for_games)
{
difference = norm_of_games  - time_for_games;
}

int difference_hours = difference/60;
int difference_minutes = difference % 60;
if( difference > 30000)
{
cout<<"Tom will run away"<<endl;
cout<<difference_hours<<" hours and "<<difference_minutes<<" for play"<<endl;

}
if( difference < 30000)
{
cout<<"Tom sleeps well"<<endl;
cout<<difference_hours<<" hours and "<<difference_minutes<<" less for play"<<endl;

}



}