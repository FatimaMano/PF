#include<iostream>
#include<cmath>
using namespace std;
main()
{
    string type_year;
    int number_of_holidays, number_of_weekends;
    cout<<"Enter the type of year";
    cin>>type_year;
    cout<<"Enter the number of holidays you have";
    cin>>number_of_holidays;
    cout<<"Enter the number of weekends that you went home";
    cin>>number_of_weekends;
    float played_on_holidays = number_of_holidays * (2.0/3.0);
    float played_on_weekends = (48 - number_of_weekends) * (3.0/4.0);
    float total = played_on_holidays + played_on_weekends + number_of_weekends;
    if(type_year == "Leap")
    {
        total = total + (total * 0.15);

        cout<<floor(total);
    }
    else
    {
        cout<<floor(total);
    }

}





