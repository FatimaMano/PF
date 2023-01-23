#include<iostream>
using namespace std; 
int frequencyChecker(int number,int digit);
main()
{
    int number,digit;
    cout<<"Enter number";
    cin>>number;
    cout<<"Enter digit";
    cin>>digit;
    cout<<"Number of digits "<<frequencyChecker(number,digit);

}
int frequencyChecker(int number,int digit)
{
    
    int count_length =0;

    while (number%10 != 0 && number>0)
    {
        if(number%10 == digit)
        {
            count_length +=1;
        }
        number = number /10;

    }
    return count_length;
}