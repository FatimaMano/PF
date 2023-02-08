#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a string";
    getline(cin,name);
    int count=0;
    for(int idx=0;name[idx]!='\0';idx++)
    {
        if(name[idx] == 'a' || name[idx] == 'e' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u')
        {
            count++;
        }
    }
    cout<<"Number of vowels are "<<count;
}