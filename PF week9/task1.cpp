#include <iostream>
using namespace std;
main()
{
    int arraysize;
    cout<<"Enter the size of array";
    cin>>arraysize;
    float cgpa[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout <<"Enter value";
        cin>>cgpa[idx];
    }
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout <<" "<<cgpa[idx];
    }
}