#include<iostream>
using namespace std;
main()
{
    int number_of_hours, number_of_days, number_of_workers;
    cout<<"Enter number of hours needed to complete the project";
    cin>>number_of_hours;
    cout<<"Enter number of days needed to complete";
    cin>>number_of_days;
    cout<<"Enter the number of workers";
    cin>>number_of_workers;
    float training_days = number_of_days * 0.1;
    int number_of_days_left = number_of_days - training_days;
    int total_hours = 10 * number_of_workers * number_of_days_left;
    int additional_hours;

    if(total_hours > number_of_hours)
    {
        int hours = total_hours - number_of_hours;
        cout<<"Yes! "<<hours<<" left";
    }
    if(total_hours < number_of_hours)
    {
        int additional_hours;
        additional_hours = number_of_hours - total_hours;
        cout<<"Not enough time!"<<additional_hours<<" hours needed";
    }

}