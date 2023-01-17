#include<iostream>
using namespace std;
main()
{
    string month;
    int number_of_stays;
    float final_result_for_studio,final_result_for_apartment;
    cout<<"Enter the number of stays in th hotel";
    cin>>number_of_stays;
    cout<<"Enter the name of the month";
    cin>>month;
    if(month == "May" && month == "October")
    {
        final_result_for_studio = 50 * number_of_stays;
        final_result_for_apartment = 68.70 * number_of_stays;

        if(number_of_stays > 7 && number_of_stays < 14)
        {
            final_result_for_studio = (final_result_for_studio * 0.05) + final_result_for_studio;
        }
        else if(number_of_stays > 14)
        {
            final_result_for_studio = (final_result_for_studio * 0.3) + final_result_for_studio;
            final_result_for_apartment = (final_result_for_apartment * 0.1) + final_result_for_apartment;


        }
        
    }
    else if(month == "June" || month == "September")
    {
        final_result_for_studio = 75.20 * number_of_stays;
         final_result_for_apartment = 68.70 * number_of_stays;
        if(number_of_stays > 14)
        {
            final_result_for_studio = (final_result_for_studio * 0.2) + final_result_for_studio;
            final_result_for_apartment = (final_result_for_apartment * 0.1) + final_result_for_apartment;
        }

    }
    else if(month == "July" || month == "August")
    {
        final_result_for_studio = 76 * number_of_stays;
        final_result_for_apartment = 77 * number_of_stays;
        if(number_of_stays > 14)
        {
            final_result_for_apartment = (final_result_for_apartment * 0.1) + final_result_for_apartment;
        }

    }
}