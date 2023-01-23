#include<iostream>
using namespace std;
float calculatePrice(float money,int year);
main()
{
    double inherited_money,year;
    cout<<"Enter your inherited money";
    cin>>inherited_money;
    cout<<"Enter the year you want to travel";
    cin>>year;
    float total;
    total = calculatePrice(inherited_money, year);
    if(total < inherited_money)
    {
        cout<<"Yes! he will live a carefree life and will have "<<inherited_money-total<<" left";
    } 
    else if(inherited_money < total)
    {
        cout<<"No he will need"<<total - inherited_money<<" money need";
    }   
}
float calculatePrice(float money,int year)
{
    float total_even=0,total_odd=0,total=0;
    for(int count=1800;count <=year;count++)
    {
        if(count%2==0)
        {
            total_even +=12000;
        }
        else if(count%2==1)
        {
            total_odd += (12000 + (50 * ((count-1800)+18)));
            cout<<total_odd<<endl;
        }
    }
    total = total_even + total_odd;

    return total;
}