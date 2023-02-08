#include <iostream>
using namespace std;
main()
{
    int arraysize = 5;
    float cgpa[arraysize];
    cout << "Enter CGPA of first student";
    cin >> cgpa[0];
    cout << "Enter CGPA of second student";
    cin >> cgpa[1];
    cout << "Enter CGPA of third student";
    cin >> cgpa[2];
    cout << "Enter CGPA of fourth student";
    cin >> cgpa[3];
    cout << "Enter CGPA of fifth student";
    cin >> cgpa[4];

    cout << "CGPA of first Student" << cgpa[0] << endl;
    cout << "CGPA of second Student" << cgpa[1] << endl;
    cout << "CGPA of third Student" << cgpa[2] << endl;
    cout << "CGPA of fourth Student" << cgpa[3] << endl;
    cout << "CGPA of fifth Student" << cgpa[4] << endl;
}