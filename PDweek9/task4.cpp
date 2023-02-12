#include <iostream>
using namespace std;
main()
{
    int arraysize;
    cout << "Enter the arraysize";
    cin >> arraysize;
    int numbers[arraysize], number;
    bool a = false;
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter numbers";
        cin >> numbers[idx];
    }
    for (int idx = 0; idx < arraysize; idx++)
    {
        number = numbers[idx] % 10;
        while (true)
        {
            if (numbers[idx] == 7)
            {
                a = true;
                break;
            }
            else
            {
                number = numbers[idx] % 10;
                if(number==7)
                {
                    a = true;
                    break;
                }
                else
                {
                    number = number/10;
                }
                
            }
        }
    }
    if(a == true)
    {
        cout<<"BOOM!";
    }
    else
    {
        cout<<"There is no 7 in the array";
    }
}