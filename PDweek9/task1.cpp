#include<iostream>
using namespace std;
main()
{
    int price[]= {60,70,40,30};
    string fruit[] = {"peach","apple","guava","watermelon"};
    int quantity;
    string enterfruit;
    cout<<"Enter the fruit name";
    cin>>enterfruit;
    cout<<"Enter the quantity";
    cin>>quantity;
    int calculatePrice=0;
    for(int idx=0;idx<4;idx++)
    {
        if(fruit[idx]==enterfruit)
        {
            calculatePrice = quantity * price[idx];
        }
    
    }
    cout<<"Price of "<<enterfruit<<" is "<<calculatePrice;

}