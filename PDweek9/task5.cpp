#include <iostream>
using namespace std;
main()
{
    int arraysize = 4;
    string name[arraysize];
    for (int idx = 0; idx < 4; idx++)
    {
        cout << "Enter string";
        cin >> name[idx];
    }
    string n1 = name[0];
    bool a = false;
    for (int i = 0; i < arraysize; i++)
    {
        if (name[i] == n1)
        {
            a = true;
        }
        else
        {
            a = false;
        }
    }
    if(a == true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"False";
    }
}