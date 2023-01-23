#include <iostream>
using namespace std;
void printUpperPart(int rows);
void printLowerPart(int rows);
main()
{
    int rows;
    cout << "Enter the desired rows";
    cin >> rows;
    int row1 = rows / 2;
    int row2 = rows - row1;
    printUpperPart(row1);
    printLowerPart(row2);
}
void printUpperPart(int row1)
{
    int space2 = row1;
    for (int i = 1; i <= row1; i++)
    {
        for (int j = space2; j > 1; j--)
        {
            cout << " ";
        }
        space2--;
        for (int a = 1; a <= i; a++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printLowerPart(int row2)
{
    int space1 = row2 + 1;
    for (int i = 1; i <= row2; i++)
    {
        for (int a = row2; a >= i; a--)
        {
            cout << "*";
        }
        cout << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        space1--;
    }
}
