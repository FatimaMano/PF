#include <iostream>
using namespace std;
main()
{
    int count=0,arrayize1,arrayize2;
    string name1,name2;
    arrayize1 = name1.length();
    arrayize2 = name2.length();
    cout<<"Enter the first string";
    cin>>name1;
    cout<<"Enter the second string";
    cin>>name2;

    for (int idx = 0; idx < arrayize1; idx++)
    {
        for(int i = 0; i < arrayize2; i++)
        {
            if(name1[idx] == name2[i])
            {
                count++;
                name2[i]==' ';
                break;
            } 
        }
    }
    cout<<count;
}