#include <iostream>
using namespace std;
main()
{
   int arraysize;
    cout<<"Enter the array size";
    cin>> arraysize;
    int number[arraysize],checknumber;
    bool check = false;
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout <<"Enter value";
        cin>>number[idx];
    }
    cout<<"Enter the number you want to find in the array";
    cin>>checknumber;
    for (int idx = 0; idx < arraysize; idx++)
    {
        if(number[idx] == checknumber)
        {
            check = true;
            break;
        }
    }
    if(check == true)
    {
        cout<<checknumber<<" is present in the array";
    }
    else
    {
        cout<<checknumber<<" is not present in the array";
    }
}