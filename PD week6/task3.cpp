#include<iostream>
using namespace std;
main()
{
    int date;
    string month_of_birth;
    cout<<"Enter your birth date";
    cin>>date;
    cout<<"Enter your birth month";
    cin>>month_of_birth;
    if((date <=19 && month_of_birth == "April") || (date >=21 && month_of_birth == "March") )
    {
        cout<<"Aries";
    }
    else if((date <=20 && month_of_birth == "May") || (date >=20 && month_of_birth == "April") )
    {
        cout<<"Taurus";
    }
    else if((date >=21 && month_of_birth == "May") || (date <=20 && month_of_birth == "June") )
    {
        cout<<"Gemini";
    }
    else if((date <=22 && month_of_birth == "July") || (date >=21 && month_of_birth == "June") )
    {
        cout<<"Cancer";
    }
    else if((date <=22 && month_of_birth == "August") || (date >=23 && month_of_birth == "July") )
    {
        cout<<"Leo";
    }
    else if((date <=22 && month_of_birth == "September") || (date >=23 && month_of_birth == "August") )
    {
        cout<<"Virgo";
    }
    else if((date <=23 && month_of_birth == "September") || (date >=22 && month_of_birth == "October") )
    {
        cout<<"Libra";
    }
    else if((date <=20 && month_of_birth == "October") || (date >=21 && month_of_birth == "November") )
    {
        cout<<"Scorpio";
    }
    else if((date <=21 && month_of_birth == "December") || (date >=22 && month_of_birth == "November") )
    {
        cout<<"Sagittarius";
    }
    else if((date <=20 && month_of_birth == "January") || (date >=21 && month_of_birth == "December") )
    {
        cout<<"Capricorn";
    }
    else if((date <=18 && month_of_birth == "February") || (date >=20 && month_of_birth == "January") )
    {
        cout<<"Aquarius";
    }
    else if((date <=20 && month_of_birth == "March") || (date >=19 && month_of_birth == "February") )
    {
        cout<<"Pisces";
    }
    
}