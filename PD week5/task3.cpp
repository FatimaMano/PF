#include<iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
    float price,taxAmount,final_price;
    char type_code;
    cout<<"Enter the price of vehicle";
    cin>>price;
    cout<<"Enter the type of vehicle";
    cin>>type_code;
    taxAmount = taxCalculator(type_code, price);
    final_price = price + taxAmount;
    cout<<"The final price on a vehicle of type "<<type_code<<" after adding the tax is $"<<taxAmount<<"  with"<<type_code<<"replaced by vehicle type"<<" and "<<final_price<<" with the final price";


    
}
float taxCalculator(char type, float price)
{
    float tax_rate;
    if(type == 'M')
    {
        tax_rate = 0.06;
        
    }
    if(type == 'E')
    {
        tax_rate = 0.08;
    }
    if(type == 'S')
    {
        tax_rate = 0.1;
    }
    if(type == 'V')
    {
        tax_rate = 0.12;
    }
    if(type == 'T')
    {
        tax_rate = 0.15;
    }
    float tax_amount = price * tax_rate;
    return tax_rate;
}