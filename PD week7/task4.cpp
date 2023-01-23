#include<iostream>
using namespace std;
void amplify(int number);
main()
{
    int  number;
    cout<<"Enter the ending range";
    cin>>number;
    amplify(number);
}
void amplify(int number)
{
    for(int i=1;i<=number;i++)
    {
        if(i%4==0)
        {
            cout<<i*10;
        }
        else if(i%4!=0)
        {
        cout<<i;
        }
        cout<<" , ";
    }
}
