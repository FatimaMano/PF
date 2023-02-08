#include <iostream>
using namespace std;
main()
{
    int arraysize;
    cout << "Enter the array size";
    cin >> arraysize;
    int number[arraysize];
    int smallest;
    int largest;
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter value";
        cin >> number[idx];
        smallest = number[0];
        largest = number[0];
        if (number[idx] < smallest)
        {
            smallest = number[idx];
        }
        if (number[idx] > largest)
        {
            largest = number[idx];
        }
    }
    cout << smallest << endl;
    cout << largest << endl;
}