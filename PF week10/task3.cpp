#include<iostream>
using namespace std;
bool CheckLargestNumber(int number1,int number2,int number);
main()
{
    int count=0;
    int arraysize;
    cout << "How many elements you wan to enter";
    cin >> arraysize;
    int numbers[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter number";
        cin >> numbers[idx];
    }
    int FinalArray[arraysize+1];
    bool flag = false;
    for (int i = 1; i < arraysize -1; i++)
    {
        flag == CheckLargestNumber(numbers[i+1],numbers[i-1],numbers[i]);
        if(flag == true)
        {
            FinalArray[count] = numbers[i];
            count++;
        }
    }
    if(count == 0)
    {
        cout<<"No Peak";
    }
    else
    {
        for(int index = 0; index < count; index++)
        {
            cout<<FinalArray[index]<<endl;
        }
    }
    
}
bool CheckLargestNumber(int number1,int number2,int number)
{
    if (number > number1 && number > number2)
    {
        return true;
    }
    

}