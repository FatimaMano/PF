#include<iostream>
using namespace std;
main()
{
    string movies[5] = {"Gladiator", "StarWars","Terminator,TakingLives","TombRider"}; 
    int price = 500;
    string moviename;
    float discount, final_Price;
    cout<<"Enter the Movie name";
    cin>>moviename;
    for(int idx =0;idx<5;idx++)
    {
        if(movies[idx] == moviename)
        {
            if(idx%2 == 0)
            {
                discount = price * 0.05;
            }
            else if(idx%2 == 1)
            {
                discount = price * 0.1;
            }
        }
    }
    final_Price = price - discount;
}