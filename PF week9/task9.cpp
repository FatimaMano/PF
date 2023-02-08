#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter your name";
    getline(cin, name);
    char letter;
    bool check = false;
    cout<<"Enter the Letter you want to find in the array";
    cin>>letter;

    for (int idx = 0; name[idx]!='\0'; idx++)
    {
        if(name[idx] == letter)
        {
            check = true;
            break;
        }
    }
    if(check == true)
    {
        cout<<letter<<" is present in the array";
    }
    else
    {
        cout<<letter<<" is not present in the array";
    }
}