#include <iostream>
using namespace std;
main()
{
    int starting_time_in_hours, starting_time_in_minutes;
    int hour_of_arrival, arrival_time_in_minutes;
    float total_starting_Time, Total_arrival_Time;
    cout << "Enter Starting time";
    cin >> starting_time_in_hours;
    cout << "Enter Starting time in minutes";
    cin >> starting_time_in_minutes;
    cout << "Enter Student hour of arrival";
    cin >> hour_of_arrival;
    cout << "Enter Student minutes of arrival";
    cin >> arrival_time_in_minutes;
    total_starting_Time = (starting_time_in_hours * 60) + starting_time_in_minutes;
    Total_arrival_Time = (hour_of_arrival * 60) + arrival_time_in_minutes;
    int result_in_minutes;
    if (Total_arrival_Time > total_starting_Time)
    {
        result_in_minutes = Total_arrival_Time - total_starting_Time;
    }
    else
    {
        result_in_minutes = total_starting_Time - Total_arrival_Time;
    }
    int hours = 0, minutes = 0;
    hours = (result_in_minutes / 60);
    minutes = (result_in_minutes % 60);
    if ((Total_arrival_Time == total_starting_Time) && result_in_minutes<=30)
    {
        cout << "On Time"<<endl;
        cout <<minutes<<" minutes before the start"<<endl;
    }
    else if(result_in_minutes > 30 && (Total_arrival_Time < total_starting_Time))
    {
        cout<<"Early"<<endl;
        cout << hours << " hours and "<<minutes<<" minutes before the start"<<endl;
    }
    if (Total_arrival_Time > total_starting_Time)
    {
        cout << "Late" << endl;
        if(result_in_minutes >=60)
        {
        cout << hours << " hours and "<<minutes<<" minutes after the start"<<endl;
        }
        else
        {
            cout<<result_in_minutes<<" minutes after the start"<<endl;
        }
    }
    
}