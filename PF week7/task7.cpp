#include<iostream>
#include<cmath>
using namespace std;
void printPercentage(int number);
main()
{
    int number_of_input;
    cout<<"Enter number of inputs";
    cin>>number_of_input;
    printPercentage(number_of_input);

}
void printPercentage(int number_of_input)
{
    float p1=0,p2=0,p3=0,p4=0,p5=0;
    float p1percentage,p2percentage,p3percentage,p4percentage,p5percentage;
    for(int count =1;count<=number_of_input;count++)
    {
        int number;
        cout<<"Enter number";
        cin>>number;
        if(number < 200 && number > 0)
        {
            p1 +=1;
        }
        else if(number >200 && number <=399)
        {
            p2 +=1;
        }
        else if(number >400 && number <=599)
        {
            p3 +=1;
        }
        else if(number >600 && number <=799)
        {
            p4 +=1;
        }
        else if(number >800 && number <=1000)
        {
            p5 +=1;
        }

    }
    p1percentage = (p1/number_of_input) * 100.0;
    p2percentage = (p2/number_of_input) * 100.0;
    p3percentage = (p3/number_of_input) * 100.0;
    p4percentage = (p4/number_of_input) * 100.0;
    p5percentage = (p5/number_of_input) * 100.0;
    cout<<(ceil(p1percentage*100))/100<<endl;
    cout<<(ceil(p2percentage*100))/100<<endl;
    cout<<(ceil(p3percentage*100))/100<<endl;
    cout<<(ceil(p4percentage*100))/100<<endl;
    cout<<(ceil(p5percentage*100))/100<<endl;


}
