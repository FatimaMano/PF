/* 5
day 4.65*/
#include <iostream>
using namespace std;
float lowestPrice(int, string);
main()
{
    int number_of_kilometers;
    string time_of_day;
    cout << "Enter number of kilometers";
    cin >> number_of_kilometers;
    cout << "Enter time of the day";
    cin >> time_of_day;
    cout<<lowestPrice(number_of_kilometers, time_of_day);
}
float lowestPrice(int number_of_kilometers, string time_of_day)
{
    float result1 = 0, result2 = 0, result3 = 0;
    float final_result = 0;
    if (number_of_kilometers < 100)
    {
        if (time_of_day == "day")
        {
            result1 = number_of_kilometers * 0.79 + 0.70;
        }
        else if (time_of_day == "night")
        {
            result1 = number_of_kilometers * 0.90 + 0.70;
        }
    }
    if (number_of_kilometers < 100 && number_of_kilometers >= 20)
    {
        result2 = number_of_kilometers * 0.09;
    }
    else if (number_of_kilometers >= 100)
    {
        result3 = number_of_kilometers * 0.06;
        return result3;
    }

    if (result1 < result2 || number_of_kilometers <20 )
    {
        final_result = result1;

    }
    else if (result2 < result1)
    {
        /* code */
        final_result = result2;
    }
    else
    {
        final_result = result3;
    }
    return final_result;
}