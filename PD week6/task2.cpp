#include <iostream>
using namespace std;
main()
{
    int subject_marks;
    int total_marks = 0;
    float result, percentage;
    string grade;
    string name;
    cout << "Enter your name";
    cin >> name;
    int i = 1;
    bool b = true;
    float sum =0;
    while (b)
    {
        cout << "Enter your subject marks";
        cin >> subject_marks;
        sum += subject_marks; 
        i += 1;
        if (i == 6)
        {
            b = false;
        }
    }
    cout<<subject_marks;
    percentage = (subject_marks / total_marks) * 100;
    cout<<percentage;
    if (percentage >= 90 && percentage <= 100)
    {
        grade = "A+";
    }
    else if (percentage >= 80 && percentage <= 90)
    {
        grade = "A";
    }
    else if (percentage >= 70 && percentage <= 80)
    {
        grade = "B";
    }
    else if (percentage >= 60 && percentage <= 70)
    {
        grade = "B+";
    }
    else if (percentage >= 50 && percentage <= 60)
    {
        grade = "C";
    }
    else if (percentage >= 40 && percentage <= 50)
    {
        grade = "D";
    }
    else if (percentage < 40)
    {
        grade = "F";
    }
    cout<<"Total marks are"<<total_marks<<" ,percentage is "<<percentage<<"% "<<",grade is"<<grade<<" and name is "<<name;
}
