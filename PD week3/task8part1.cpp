#include<iostream>
using namespace std;
main()
{
float veg_price_kg,fruit_price_kg;
int total_kg_vegs, total_kg_fruits;
float veg_cost, fruit_cost, total, total_rupees;
cout<<"Enter vegetable price per kilogram";
cin>>veg_price_kg;
cout<<"Enter fruits price per kilogram";
cin>>fruit_price_kg;
cout<<"Enter total kilograms of vegetables";
cin>>total_kg_vegs;
cout<<"Enter total kilograms of fruits";
cin>>total_kg_fruits;
veg_cost = veg_price_kg * total_kg_vegs;
fruit_cost = fruit_price_kg * total_kg_fruits;
total = veg_cost + fruit_cost;
total_rupees = total/ 1.94;
cout<<"Total harvest in rupees"<< total_rupees;






}