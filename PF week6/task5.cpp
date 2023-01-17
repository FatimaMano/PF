/* Premier
10
12*/
#include<iostream>
using namespace std;
float totalIncome(string,int,int);
main()
{
    string type_of_screen;
    int number_of_rows, number_of_columns;
    cout<<"Enter the type of screen";
    cin>>type_of_screen;
    cout<<"Enter the number of rows";
    cin>>number_of_rows;
    cout<<"Enter the number of columns";
    cin>>number_of_columns;
    cout<<totalIncome(type_of_screen,number_of_rows,number_of_columns);

}
float totalIncome(string type_of_screen,int type_of_rows,int type_of_columns)
{
    float result;
    if(type_of_screen == "Premiere")
    {
         result = type_of_rows * type_of_columns * 12.00;
    }
    else if(type_of_screen == "Normal")
    {
         result = type_of_rows * type_of_columns * 7.50;
    }
    else if(type_of_screen == "Discount")
    {
         result = type_of_rows * type_of_columns * 5.00;
    }
    else
    {
        result = 0;
    }
    return result;

   
}