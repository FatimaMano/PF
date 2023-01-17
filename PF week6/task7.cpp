#include<iostream>
using namespace std;
float Calculate_price(string city,string product, int quantity);
main()
{
    string city,product;
    int quantity;
    float final_result;
    cout<<"Enter the city";
    cin>>city;
    cout<<"Enter the product name";
    cin>>product;
    cout<<"Enter the quantity of the product";
    cin>>quantity;
    final_result = Calculate_price(city,product,quantity);
    cout<<final_result;
    

}
float Calculate_price(string city,string product, int quantity)
{
    float final_Result;
    if(city == "Sofia")
    {
        if(product == "coffee")
        {
            final_Result = 0.50 * quantity;
            
        }
        else if(product == "water")
        {
            final_Result = 0.80 * quantity;
            
        }
        else if(product == "beer")
        {
            final_Result = 1.20 * quantity;
            
        }
        else if(product == "sweets")
        {
            final_Result = 1.45 * quantity;
            
        }
        else if(product == "peanuts")
        {
            final_Result = 1.60 * quantity;
            
        }
    }
    else if(city == "Plovdiv")
    {
        if(product == "coffee")
        {
            final_Result = 0.40 * quantity;
            
        }
        else if(product == "water")
        {
            final_Result = 0.70 * quantity;
            
        }
        else if(product == "beer")
        {
            final_Result = 1.15 * quantity;
            
        }
        else if(product == "sweets")
        {
            final_Result = 1.30 * quantity;
            
        }
        else if(product == "peanuts")
        {
            final_Result = 1.50 * quantity;
            
        }
    }
    else if(city == "Varna")
    {
        if(product == "coffee")
        {
            final_Result = 0.45 * quantity;
            
        }
        else if(product == "water")
        {
            final_Result = 0.70 * quantity;
            
        }
        else if(product == "beer")
        {
            final_Result = 1.10 * quantity;
            
        }
        else if(product == "sweets")
        {
            final_Result = 1.35 * quantity;
            
        }
        else if(product == "peanuts")
        {
            final_Result = 1.55 * quantity;
            
        }
    }
    return final_Result;
}

