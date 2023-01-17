#include <iostream>
using namespace std;
main()
{
    string type_of_fruit, day_of_week;
    float quantity;
    double final_result;
    cout << "Enter the type of fruit";
    cin >> type_of_fruit;
    cout << "Enter the day of week";
    cin >> day_of_week;
    cout << "Enter the quantity";
    cin >> quantity;
    if (day_of_week != "Saturday" && day_of_week != "Sunday")
    {
        if (type_of_fruit == "banana")
        {
            final_result = quantity * 2.50;
        }
        else if (type_of_fruit == "apple")
        {
            final_result = quantity * 1.20;
        }
        else if (type_of_fruit == "orange")
        {
            final_result = quantity * 0.85;
        }
        else if (type_of_fruit == "grapefruit")
        {
            final_result = quantity * 1.45;
        }
        else if (type_of_fruit == "kiwi")
        {
            final_result = quantity * 2.70;
        }
        else if (type_of_fruit == "pineapple")
        {
            final_result = quantity * 5.50;
        }
        else if (type_of_fruit == "grapes")
        {
            final_result = quantity * 3.85;
        }
        else
        {
            cout<<"invalid";
        }
    }
    else if (day_of_week == "Saturday" || day_of_week == "Sunday")
    {
        if (type_of_fruit == "banana")
        {
            final_result = quantity * 2.70;
        }
        else if (type_of_fruit == "apple")
        {
            final_result = quantity * 1.25;
        }
        else if (type_of_fruit == "orange")
        {
            final_result = quantity * 0.90;
        }
        else if (type_of_fruit == "grapefruit")
        {
            final_result = quantity * 1.60;
        }
        else if (type_of_fruit == "kiwi")
        {
            final_result = quantity * 3.00;
        }
        else if (type_of_fruit == "pineapple")
        {
            final_result = quantity * 5.60;
        }
        else if (type_of_fruit == "grapes")
        {
            final_result = quantity * 4.20;
        }
        else
        {
            cout<<"Invalid";
        }
    }
    else
    {
        cout<<"Invalid";
    }
    cout<<final_result;
}