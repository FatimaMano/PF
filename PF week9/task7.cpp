#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter your name";
    getline(cin,name);
    int count =0;
    for(int idx=0;name[idx]!='\0';idx++)
    {
        count++;
    }
    cout<<count;
}