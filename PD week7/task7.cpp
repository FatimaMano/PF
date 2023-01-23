#include<iostream>
#include<cmath>
using namespace std;
void calculatePercentages(int count_of_numbers);
main()
{
    int count_of_numbers;
    cout<<"Enter the count of numbers";
    cin>>count_of_numbers;
    calculatePercentages(count_of_numbers);
}
void calculatePercentages(int count_of_numbers)
{
    int number;
    float p1=0,p2=0,p3=0;
    float percentagep1=0,percentagep2=0,percentagep3=0;
    for(int count=1;count<=count_of_numbers;count++)
    {
        cout<<"Enter the number";
        cin>>number;
        if(number%2==0)
        {
            p1+=1;
        }
        if(number%3==0)
        {
            p2+=1;
        }
        if(number%4==0)
        {
            p3+=1;
        }
    }
    percentagep1 = (p1/count_of_numbers)*100;
    percentagep2 = (p2/count_of_numbers)*100;
    percentagep3 = (p3/count_of_numbers)*100;
    cout<<(floor(percentagep1*100))/100<<endl;
    cout<<(floor(percentagep2*100))/100<<endl;
    cout<<(floor(percentagep3*100))/100<<endl;

}
