#include <iostream>
using namespace std;
float payableAmountAfterDiscount(string day, string month, float total_amount);

main()
{
    string day, month;
    int total_Amount;
    cout << "Enter the day";
    cin >> day;
    cout << "Enter the month";
    cin >> month;
    cout << "Enter the total amount";
    cin >> total_Amount;
    cout << payableAmountAfterDiscount(day, month, total_Amount);
}
float payableAmountAfterDiscount(string day, string month, float total_amount)
{
    float discount, payableAmount;

    if (day == "Sunday")
    {
        if (month == "October" || month == "March" || month == "August")
            discount = total_amount * 0.1;
        cout << discount;
        payableAmount = total_amount - discount;
    }
    else if (day == "Monday")
    {
        if (month == "November" || month == "December")
        {
            discount = total_amount * 0.05;
            cout << discount;
            payableAmount = total_amount - discount;
        }
    }
    else
    {
        payableAmount = total_amount;
    }
    return payableAmount;
}