#include<iostream>
using namespace std;
main()
{
    string temperature, humidity;
    cout<<"Enter the temperature";
    cin>>temperature;
    cout<<"Enter the value of humidity";
    cin>>humidity;
    if(temperature == "warm")
    {
        if(humidity == "dry")
        {
            cout<<"Play tennis";
        }
        else if(humidity == "humid")
        {
            cout<<"swim";
        }
    }
    if(temperature == "cold")
    {
        if(humidity == "dry")
        {
            cout<<"Play basketball";
        }
        else if(humidity == " humid")
        {
            cout<<"Watch tv";
        }
    }
    
}