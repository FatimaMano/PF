#include<iostream>
using namespace std;
string checkTitle(float age, char gender);
main()
{
    float age;
    char gender;
    cout<<"Enter your age";
    cin>>age;
    cout<<"Enter your gender";
    cin>>gender;
    cout<<checkTitle(age, gender);
}
string checkTitle(float age, char gender)
{
    string Title;
    if(age >=16 && gender=='m')
    {
        Title = "Mr.";
    }
    else if(age >=16 && gender=='f')
    {
        Title = "Ms.";
    }
    else if(age < 16 && gender=='m')
    {
        Title = "Master";
    }
    else if(age < 16 && gender=='f')
    {
        Title = "Miss";
    }
    return Title;

}