#include<iostream>
#include<cmath>
using namespace std;
float Calculate_budget(float budget, string category, int number_of_people);
main()
{
    float budget;
    string category;
    int number_of_people;
    cout<<"Enter the budget of the trip";
    cin>>budget;
    cout<<"Enter the category which tickets you want";
    cin>>category;
    cout<<"Enter the number of people in the trip";
    cin>>number_of_people;
    double final_result;
    final_result = Calculate_budget(budget, category, number_of_people);
    float Difference_of_budget;
    if(number_of_people >=1 && number_of_people <=4)
    {
        Difference_of_budget = budget * 0.75;
    }
    else if(number_of_people >=5 && number_of_people<=9)
    {
        Difference_of_budget = budget * 0.60;
    }
    else if(number_of_people >=10 && number_of_people<=24)
    {
        Difference_of_budget = budget * 0.50;
    }
    else if(number_of_people >=25 && number_of_people<=49)
    {
        Difference_of_budget = budget * 0.40;
    }
    else if(number_of_people >=50 )
    {
        Difference_of_budget = budget * 0.25;
    }
    float Left_budget = budget - Difference_of_budget;
    if(final_result > Left_budget)
    {
        final_result = final_result - Left_budget;
        cout<<"Not enough money! You need "<<(ceil(final_result*100))/100<<" QR";
    }
    else
    {
        final_result = Left_budget - final_result;
        cout<<"Yes! You have "<<(ceil(final_result * 100))/100<<" QR left";
    }



}
float Calculate_budget(float budget, string category, int number_of_people)
{
    
    float final_cost;
    if(category == "VIP")
    {   //For VIP
        final_cost = 499.99 * number_of_people;

    }
    else
    {   // For Normal
        final_cost = 249.99 * number_of_people;
    }
    return final_cost;
}
