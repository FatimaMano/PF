#include<iostream>
using namespace std;
main()
{








}
void discount_price()
{
string company_name;
float ticket_price_dollars;
float final_price;
cout<<"Enter company name";
cin>>company_name
cout<<"ticket price in dollars";
cin>>ticket_price_dollars;
float discount;

if(company_name == "pakistan")
{
    discount = ticket_price_dollars * 0.05;
    final_price = ticket_price_dollars -  discount;
}

if(company_name == "ireland")
{
    discount = ticket_price_dollars * 0.1;
    final_price = ticket_price_dollars -  discount;
}

if(company_name == "india")
{
    discount = ticket_price_dollars * 0.2;
    final_price = ticket_price_dollars -  discount;
}

if(company_name == "england")
{
    discount = ticket_price_dollars * 0.3;
    final_price = ticket_price_dollars -  discount;
}

if(company_name == "canada")
{
    discount = ticket_price_dollars * 0.45;
    final_price = ticket_price_dollars -  discount;
}



cout<<"final price of the ticket after discount is "<<final_price;



}