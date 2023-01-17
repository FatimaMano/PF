#include <iostream>
using namespace std;
main()
{
    int number_of_minutes_used =0, number_of_minutes_used_day =0, number_of_minutes_used_night =0;
    char service_type, time_of_day;
    float final_result;
    cout << "Enter which type of customer you are(Residental or Premium) select(r/p):";
    cin >> service_type;
    if (service_type == 'n')
    {
        cout << "Enter the number of minutes the service was used";
        cin >> number_of_minutes_used;
        if (number_of_minutes_used > 50)
        {
            final_result = (number_of_minutes_used - 50) * 0.20 + 10;
        }
        else
        {
            final_result = 10;
        }
        cout << "The type of service is Regular , the number of minutes the service used is " << number_of_minutes_used << " and the charges are " << final_result << "$";
    }
    else if (service_type == 'p')
    {
        cout << "Press 'D' for day time or Press 'N' for night time) call:";
        cin >> time_of_day;
        if (time_of_day == 'D')
        {
            cout << "Enter number of minutes you used the service";
            cin >> number_of_minutes_used_day;
            number_of_minutes_used = number_of_minutes_used_day;
            if (number_of_minutes_used > 75)
            {
                final_result = (number_of_minutes_used - 75) * 0.10 + 25;
            }
            else
            {
                final_result = 25;
            }
        }
        else if (time_of_day == 'N')
        {
            cout << "Enter number of minutes you used the service";
            cin >> number_of_minutes_used_night;
            number_of_minutes_used = number_of_minutes_used_night;
            if (number_of_minutes_used > 100)
            {
                final_result = (number_of_minutes_used - 100) * 0.05 + 25;
            }
            else
            {
                final_result = 25;
            }
        }
        cout << "The type of service is Premium , the number of minutes the service used is " << number_of_minutes_used << " and the charges are " << final_result << "$";
    }
    else
    {
        cout<<"You have pressed the wrong try again!";
    }
}
