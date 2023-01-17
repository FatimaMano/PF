#include <iostream>
using namespace std;
char CalculateGrade(int marks);
main()
{
    int marks;
    cout << "Enter your marks";
    cin >> marks;
    cout << CalculateGrade(marks);
}
char CalculateGrade(int marks)
{
    char character;
    if (marks > 85 && marks <= 100)
    {
        character = 'A';
    }
    else if (marks <= 85 || marks >= 81)
    {
        character = 'B';
    }
    else if (marks <= 80 || marks >= 71)
    {
        character = 'C';
    }
    else if (marks <= 70 || marks >= 61)
    {
        character = 'D';
    }
    else if (marks <= 60 || marks >= 50)
    {
        character = 'E';
    }
    else if(marks > 0 && marks < 50)
    {
        character = 'F';
    }
    return character;
}
