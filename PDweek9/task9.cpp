#include <iostream>
using namespace std;
int ConvertStringToNumber(char character);
main()
{
    string MOVES[10] = {"Shimmy","Shake","Pirouette","Slide","Box Shop","Headspin","Dosado","Pop","Lock","Arabesque"},pincode;
    cout<<"Enter pincode";
    cin>>pincode;
    int index,count=0;
    bool a = false;
    for(int idx=0;idx<4;idx++)
    {
        if(pincode[idx] == '0' || pincode[idx] == '1' || pincode[idx] == '2' || pincode[idx] == '3' || pincode[idx] == '4' || pincode[idx] == '5' || pincode[idx] == '6' || pincode[idx] == '7' || pincode[idx] == '8' || pincode[idx] == '9')
        {
            a = true;
        }
        else
        {
            a = false;
            break;
        }
    }
    if(a == true)
    for(int idx=0;idx<4;idx++)
    {
        index = idx + ConvertStringToNumber(pincode[idx]);
        if(index >9)
        {
            index = count;
            count++;
        }
        cout<<MOVES[index]<<" ";
        
    }
    else
    {
        cout<<"Invalid";
    }
}
int ConvertStringToNumber(char character)
{
    int number;
    if(character == '0')
    {
       number = 0;
    }
    else if(character == '1')
    {
        number = 1;
    }
    else if(character == '2')
    {
        number = 2;
    }
    else if(character == '3')
    {
        number = 3;
    }
    else if(character == '4')
    {
        number = 4;
    }
    else if(character == '5')
    {
        number = 5;
    }
    else if(character == '6')
    {
        number = 6;
    }
    else if(character == '7')
    {
        number = 7;
    }
    else if(character == '8')
    {
        number = 8;
    }
    else if(character == '9')
    {
        number = 9;
    }
    return number;
}