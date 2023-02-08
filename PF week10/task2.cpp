#include <iostream>
using namespace std;
int Number_of_miles[20];
int checkCondition(int size);
main()
{
    int count=0;
    int arraysize;
    cout << "Enter the number of weeks";
    cin >> arraysize;
    count = checkCondition(arraysize);
    cout << "Number of Progress Days are  " << count;
}
int checkCondition(int size)
{
    int count=0;

     for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter the number of miles";
        cin >> Number_of_miles[idx];
        if (idx > 0 && idx<size)
        {
            if (Number_of_miles[idx] > Number_of_miles[idx - 1])
            {
                count++;
            }
        }
    }
    return count;

}
