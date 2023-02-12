#include<iostream>
using namespace std;
main()
{
    int arraysize;
    cout<<"Enter the length of the array";
    cin>>arraysize;
    int numbers[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter number";
        cin >> numbers[idx];
    }
    int temp;
    for(int i=0;i<arraysize;i++)
    {
        for(int j=i+1;j< arraysize;i++)
        {
            if(numbers[j] < numbers[i])
            temp = numbers[j];
            numbers[j] = numbers[i];
            numbers[i] = temp;

        }
    }
    for (int index= 0; index < arraysize; index++)
    {
        cout<<numbers[index]<<" ";
    }
}