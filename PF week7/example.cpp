#include <iostream>
using namespace std;
main()
{
    /*
    for(int count = 1; count<=10;count++)
    {
        cout<<"I am happy"<<endl;
    }
    
    for (int count = 1; count <= 10; count++)
    {
        cout << count << endl;
    }
    
    int luckynumber = 7;
    int number;
    cout << "Enter the number";
    cin >> number;

    while (number != luckynumber)
    {
        cout << "This is not the number! try again !" << endl;
        cout << "Enter the number";
        cin >> number;
    }
    */
   for (int count = 1; count <= 100; count++)
    {
        if(count%2 == 0)
        {
            cout<<count<<endl;
        }
    }
}