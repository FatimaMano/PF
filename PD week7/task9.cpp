#include <iostream>
using namespace std;
void printPattern(int rows);
main()
{
    int rows;
    cout << "Enter the desired rows";
    cin >> rows;
    printPattern(rows);
}
void printPattern(int rows)
{
    int space = rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int a = 1; a <= i; a++)
        {
            cout << "*";
        }
        for (int j = space*2; j > 1; j--)
        {
            cout << " ";
        }
        space--;
        for (int a = 1; a <= i; a++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}
