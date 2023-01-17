#include <iostream>
using namespace std;
int  isGreatest(int num1, int num2,int num3);
main()
{
    /* int price;
    cout << "Enter the price";
    cin >> price;
    if (price < 1500)
    {
        cout << "Buy the dress !" << endl;
    }
    else
    {
        cout << "Don't buy the dress" << endl;
    }
    string name;
    int Roll_number;
    cout << "Enter the number";
    cin >> Roll_number;
    cout << "Enter your name";
    cin >> name;
    if (Roll_number == 501)
    {
        if (name == "Ali")
        {
            cout << "Congratulations";
        }
    }
    else
    {
        cout << "Try again";
    }
     */
    int num1,num2, num3;
    cout<<"Enter the first number";
    cin>>num1;
    cout<<"Enter the second number";
    cin>>num2;
    cout<<"Enter the third number";
    cin>>num3;
    cout<<isGreatest(num1,num2,num3);
    
}
int  isGreatest(int num1, int num2,int num3)
{
    int greatest;
    if(num1 > num2 && num1 > num3)
    {
        greatest = num1;
    }
    else if (num2 > num1 && num2 > num1)
    {
        greatest = num2;
    }
    else if(num3 > num1 && num3 > num1)
    {
        greatest = num3;
    }
    else
    {
        greatest = num1;

    }
    return greatest;
    
}
