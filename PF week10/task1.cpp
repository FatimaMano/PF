#include <iostream>
using namespace std;
string Words[50];
int countLetter(string temp, char letter);
main()
{
    int arraysize, count = 0;
    cout << "Enter the number of words you want to enter";
    cin >> arraysize;
    string Words[arraysize];
    char letter;
    cout << "Enter the letter you want to find";
    cin >> letter;
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter word" << idx + 1;
        cin >> Words[idx];
    }
    string temp;
    for (int idx = 0; idx < arraysize; idx++)
    {
        string temp = Words[idx];
        count += countLetter(temp,letter);
        
    }
    cout << letter << " is present " << count << " times";
}
int countLetter(string temp, char letter)
{
    int i = 0;
    int count=0;
    while (temp[i] != '\0')
    {
        if (temp[i] == letter)
        {
            count++;
        }
        i++;
    }
}