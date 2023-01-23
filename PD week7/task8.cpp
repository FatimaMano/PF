#include<iostream>
#include<cmath>
using namespace std;
void calculatePriceOfCargo(int count_cargo);
main()
{
    int count_cargo;
    cout<<"Enter the count of cargo for transportation";
    cin>>count_cargo;
    calculatePriceOfCargo(count_cargo);
}
void calculatePriceOfCargo(int count_cargo)
{
    int current_cargo;
    int p1=0,p2=0,p3=0,sum=0;
    double percentage1=0,percentage2=0,percentage3=0,average=0;
    for(int count=1;count<=count_cargo;count++)
    {
        cout<<"Enter tonnage of the current cargo";
        cin>>current_cargo;
        if(current_cargo <=3)
        {
            p1 += current_cargo;    
        }
        else if(current_cargo >3 && current_cargo <=11)
        {
            p2+= current_cargo;   
        }
        else if(current_cargo >11)
        {
            p3+= current_cargo;    
        }
    }
    sum = p1+p2+p3;
    percentage1 = (p1/sum)*100;
    percentage2 = (p2/sum)*100;
    percentage3 = (p3/sum)*100;
    average = (p1 *200 + p2*175 + p3*120)/25;
    cout<<(ceil(average*100))/100<<endl;
    cout<<(ceil(average*100))/100<<endl;
    cout<<(ceil(average*100))/100<<endl;
    cout<<(ceil(average*100))/100<<endl;



}
