#include <iostream>
using namespace std;
main()
{
    int arraysize,time_square,count=0,time_pencil;
    cout<<"Enter the arraysize";
    cin>>arraysize;
    string array[arraysize];
    for(int idx=0;idx<arraysize;idx++)
    {
        cout<<"Enter the color";
        cin>>array[idx];
    }
    time_square = 2 * arraysize;
    for(int idx=0;idx<arraysize;idx++)
    {
        if(idx>=1)
        {
        if(array[idx] != array[idx-1])
        {
            count++;
        }
        }
    }
    time_pencil = 1 * count;
    int total_time = time_square + time_pencil;
    cout<<total_time;


}