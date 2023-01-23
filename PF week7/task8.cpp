#include<iostream>
using namespace std;
float calculateMoney(int age,float price_washing_machine,int price_of_toy);
main()
{
    int age, unit_price_of_toy;
    float price_of_washing_machine;
    cout<<"Enter your age";
    cin>>age;
    cout<<"Enter the price of washing machine";
    cin>>price_of_washing_machine;
    cout<<"Enter the unit price of toy";
    cin>>unit_price_of_toy;
    
    float total =  calculateMoney(age,price_of_washing_machine,unit_price_of_toy);
    if(total > price_of_washing_machine)
    {
        total = total - price_of_washing_machine;
        cout<<"Yes !"<<endl<<total;
    }
    else if(total < price_of_washing_machine)
    {
        total = price_of_washing_machine - total;
        cout<<"No !"<<endl<<total;
    }
}
float calculateMoney(int age,float price_washing_machine,int price_of_toy)
{
    int count_odd=0,saved_money=0;
    float total=0;
    int result = 0;
    int count_even=1;

    for(int count=2;count<age;count = count + 2)
    {
        saved_money += 10;
        if(count > 2)
        {
            saved_money +=10;
            result = saved_money + result;
        }
        count_even +=1;

    }
    for(int count=1;count<=age;count = count + 2)
    {
        count_odd+=1;
    }
    result = result - count_even;
    float Total_price_of_toys = count_odd * price_of_toy;
    total = result + Total_price_of_toys;
    return total;
    
    
}