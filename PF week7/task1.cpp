#include<iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout<<"Enter number";
    cin>>number;
    printTable(number);

}
void printTable(int number)
{
    int result = 1;
    for(int count = 1;count<=10;count++)
    {
        result = number * count;
        cout<<number<<" * "<<count<<" = "<<result<<endl;
         
    }

}


