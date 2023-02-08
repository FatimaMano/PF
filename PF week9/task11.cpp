#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a string";
    getline(cin,name);
    int letterA;
    char letter;
    for(int idx=0;name[idx]!='\0';idx++)
    {
        letterA = name[idx];
        letter = letterA + 1;
        cout<<letter;
    }
}