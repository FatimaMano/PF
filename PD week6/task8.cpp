#include <iostream>
using namespace std;
main()
{
    int coordinatex, coordinatey;
    int h_;
    cout << "Enter coordinate of x axis";
    cin >> coordinatex;
    cout << "Enter the coordinate fo y axis";
    cin >> coordinatey;
    cout << "Enter the value of h";
    cin >> h_;
    int x_range = 3 * h_;
    int y_range = 4 * h_;
    if (coordinatex < 0 or coordinatex > 2 * h_ || coordinatey < 0 or coordinatey > 4 * h_)
    {
        cout << "Outside";
    }
    else if (coordinatex > h_ && coordinatey > 3 * h_)
    {
        cout << "Outside";
    }
    else if (coordinatex < h_ && coordinatey > 2 * h_)
    {
        cout << "Outside";
    }
    else if (coordinatex > h_ && coordinatey < h_)
    {
        cout << "Outside";
    }
    else if (coordinatex < x_range && coordinatey < y_range)
    {
        cout << "Inside";
    }
    else if (coordinatex < h_ && coordinatey < h_)
    {
        cout << "Inside";
    }
    else
    {
        cout << "Border";
    }
}