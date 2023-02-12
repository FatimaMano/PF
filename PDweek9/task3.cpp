#include<iostream>
using namespace std;
main()
{
    string name;
    int lengthof;
    lengthof = name.length();
    if(lengthof%2==0)
    {
        cout<<"true";
    }
    else if(lengthof%2==1)
    {
        cout<<"False";
    }
}