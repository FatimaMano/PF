#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter your name";
    getline(cin, name);
    int count = name.length();
    /*
    for (int idx = count - 1; idx >= 0; idx--)
    {
        cout << name[idx] << " ";
    }
    */
   if(count%2==0)
   {
    cout<<"Count is even";
   }
   else if(count%2==1)
   {
    cout<<"Count is odd";
   }

}