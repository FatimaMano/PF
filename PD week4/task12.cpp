#include<iostream>
using namespace std;
main()
{
int number_of_Red_roses, number_of_tulips, number_of_white_roses;

cout<<"Enter number of Red roses you bought"; 
cin>> number_of_Red_roses;
cout<<"Enter number of white roses you bought"; 
cin>> number_of_white_roses, 
cout<<"Enter number of tulips you bought";
cin>>  number_of_tulips;


float total_red_roses_price = number_of_items * price_of_item;
float total_white_roses_price = number_of_items * price_of_item;
float total_tulips_price = number_of_items * price_of_item;
float total = total_red_roses_price + total_white_roses_price + total_tulips_price;


if( total >  200)
{
float discount = total * 0.2;
float  price_after_discount = total - discount;


}
cout<<"Total price is"<<total;


}

