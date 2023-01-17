#include<iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speed;
    cout<<"Enter the speed";
    cin>>speed;
    cout<<checkSpeed(speed);

}
string checkSpeed(float speed)
{
    string Speed_information;
    if(speed <=10)
    {
        Speed_information = "slow";
    }
    else if(speed<=50  && speed>10)
    {
        Speed_information = "average";
    }
    else if(speed <=150 && speed >=50)
    {
        Speed_information = "fast";
    }
    else if(speed <=1000 && speed >150)
    {
        Speed_information = "ultra-fast";
    }
    else if(speed > 1000)
    {
        Speed_information = "Extremely Fast";
    }
    return Speed_information;
}