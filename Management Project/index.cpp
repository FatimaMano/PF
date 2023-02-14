#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
// Arrays
string name;
string password;
string Education;
// Admin
string NameAdmin;
string passwordAdmin;
string addressAdmin;
int ageAdmin;
double phoneNumberAdmin;
string emailAddressAdmin;
string roleAdmin;
// Staff
string namesStaff[20];
string passwordsStaff[20];
string AddressesStaff[200];
int agesStaff[200];
string rolesStaff[200];
double phoneNumbersStaff[200];
string emailAddressStaff[200];
// User
string namesCandidates[200];
string passwordsCandidates[200];
string AddressesCandidates[200];
int agesCandidates[200];
double phoneNumbersCandidates[200];
string emailAddressCandidates[200];
string rolesCandidates[200];
string Allergies[200];
string Treatments[200];
string complain = " ";
int ages[200];
int countUsers = 0;
int countStaff = 0;
string roles[200];
int number[200];
double phoneNumbers[200];
float MatricMarks[200];
float InterMarksPart[200];
float UniversityMarks[200];
int IntelligenceTest[200];
int AcademicTest[200];
int Max_Candidates = 200;
int Max_details = 5;
string result[200];
string TopCandidatesName[10];
string TopCandidatesAge[10];
string TopCandidatesResult[10];
// Running,Sit Ups, PushUps,ChinUps, Ditch Crossing
int PhysicalTest[3][200];
string TestNames[5] = {"Running", "Sit ups", "Push Ups", "logmenuChin ups", "Ditch Crossing"};
int Height[200];
int Weight[200];
// Functions
void PrintHeader();
string Signin(string username, string password, string role);
string signup(string name, double phoneNumber, string password, int age, string role, string address);
int LogMenuScreen();
void AdminScreen(int idx);
void CandidateScreen(int idx);
void StaffScreen(int idx);
void DecideMenu(string role, int idx);
void addCandidate(int idx);
int SearchString(string name, string role);
// Validate Functions
bool validateInput(char option);
int converCharIntoInteger(char option);
float PercentageCalculation(int name, float AcademicTest, float IntelligenceTest, float MatricMarks, float InterMarks, int PhysicalFitnessTest1, int PhysicalFitnessTest2, int PhysicalFitnessTest3, int PhysicalFitnessTest4, int PhysicalFitnessTest5);
bool CheckEligibility(string name, string role, int IntelligenceTest, int MatricMarks, int interMarks, int height);
main()
{
    PrintHeader();
    int option = LogMenuScreen();
    system("cls");
k:
    if (option == 1)
    {
        string role;
        cout << "Enter username" << endl;
        cin >> name;
        cout << "Enter password" << endl;
        cin >> password;
        cout << "Enter your Role(Admin / Staff / Candidate)";
        cin >> role;
        string check = Signin(name, password, role);
        if (check == role)
        {
            cout << "Sign in successfully";
            Sleep(100);
            int idx = SearchString(name, role);
            DecideMenu(role, idx);
        }
        else
        {
            option = 2;
            goto l;
        }
    }
l:
    if (option == 2)
    {
        // Variables Decleration
        string role, address, email;
        int age;
        double phoneNumber;

        // Input Number
        cout << "Enter username" << endl;
        cin >> name;
        cout << "Enter your Role(Admin / Staff / Candidate)" << endl;
        cin >> role;
        cout << "Enter your email address";
        cin >> email;
        cout << "Create a new password" << endl;
        cin >> password;
        cout << "Enter your age";
        cin >> age;
        cout << "Enter your Phone Number";
        cin >> phoneNumber;
        cout << "Enter your address";
        cin >> address;
        string check;
        check = signup(name, phoneNumber, password, age, role, address);

        if (check == "Success")
        {
            int idx;
            cout << "Sign up successfully";
            idx = SearchString(name, role);
            DecideMenu(role, idx);
        }
        else
        {
            option = 1;
            goto k;
        }
    }
}
void PrintHeader()
{
    // Pending
    system("cls");

}
int LogMenuScreen()
{
    system("cls");
    int option = 0;
    char check = ' ';
    bool checkInput = false;
    while (checkInput == false)
    {
        cout << "Select Option 1" << endl;
        cout << "Sign in" << endl;
        cout << "Select Option 2" << endl;
        cout << "Sign up";
        cin >> check;
        checkInput = validateInput(check);
        if(checkInput == true)
        {
            option = converCharIntoInteger(check);
        }
        system("cls");
    }
    return option;
}
string Signin(string username, string password, string role)
{
    if (role == "Candidates")
    {
        for (int idx = 0; idx < countUsers; idx++)
        {
            if (namesCandidates[idx] == username && passwordsCandidates[idx] == password)
            {
                return role;
            }
            return "Sign up";
        }
    }
    else if (role == "Admin")
    {
        if (NameAdmin == username && passwordAdmin == password)
        {
            return role;
        }
        return "Sign up";
    }
    else if (role == "Staff")
    {
        if (NameAdmin == username && passwordAdmin == password)
        {
            return role;
        }
        return "Sign up";
    }
}
string signup(string name, double phoneNumber, string password, int age, string role, string address)
{
    if (role == "Candidates")
    {
        for (int idx = 0; idx < countUsers; idx++)
        {
            if (namesCandidates[idx] == name && passwordsCandidates[idx] == password)
            {
                return "Sign in";
            }
        }
    }
    else if (role == "Admin")
    {
        if (NameAdmin == name && passwordAdmin == password)
        {
            return "Sign in";
        }
    }
    else if (role == "Staff")
    {
        if (NameAdmin == name && passwordAdmin == password)
        {
            return "Sign in";
        }
    }
    if (role == "Candidate" || role == "candidate")
    {
        namesCandidates[countUsers] = name;
        roles[countUsers] = role;
        passwordsCandidates[countUsers] = password;
        agesCandidates[countUsers] = age;
        phoneNumbersCandidates[countUsers] = phoneNumber;
        AddressesCandidates[countUsers] = address;
    }
    else if (role == "Staff" || role == "staff")
    {
        namesStaff[countUsers] = name;
        rolesStaff[countUsers] = role;
        passwordsStaff[countUsers] = password;
        agesStaff[countUsers] = age;
        phoneNumbersStaff[countUsers] = phoneNumber;
        AddressesStaff[countUsers] = address;
    }
    else if (role == "Admin" || role == "admin")
    {
        NameAdmin = name;
        roleAdmin = role;
        passwordAdmin = password;
        ageAdmin = age;
        phoneNumberAdmin = phoneNumber;
        addressAdmin = address;
    }

    if (role == "Candidate" || role == "candidate")
    {
        countUsers++;
    }
    else if (role == "Staff")
    {
        countStaff++;
    }

    return "Success";
}
void DecideMenu(string role, int idx)
{
    if (role == "Admin")
    {
        AdminScreen(idx);
    }
    else if (role == "Candidate")
    {
        CandidateScreen(idx);
    }
    /* Pending 
    else if (role == "Staff")
    {
        StaffScreen(idx);
    }
    */
}
void clearScreen()
{
    cout << "Press any key to continue";
    getch();
    system("cls");
}
int UserMenu()
{
    int option = 0;
    cout << "Candidate" << endl;
    cout << "Enter personal Information" << endl;
    cout << "Press Option 1" << endl;
    cout << "Update Password" << endl;
    cout << "Press Option 2" << endl;
    cout << "Enter Test Score" << endl;
    cout << "Press Option 3" << endl;
    cout << "Enter Physical Fitness Details " << endl;
    cout << "Press Option 4" << endl;
    cout << "Enter Educational Status" << endl;
    cout << "Press Option 5" << endl;
    cout << "Update Marks" << endl;
    cout << "Press Option 6" << endl;
    cout << "Enter Register Complain" << endl;
    cout << "Press Option 7" << endl;
    cout << "Registered Candidates" << endl;
    cout << "Press Option 8" << endl;
    cout << "Result" << endl;
    cout << "Press Option 9" << endl;
    cout << "Top Candidates" << endl;
    cout << "Press Option 10" << endl;
    cout << "To see Eligibility Criteria" << endl;
    cout << "Press option 11" << endl;
    cin >> option;
}
void subMenuBeforeMainMenu(string submenu)
{
    string message = submenu + " Menu";
    cout << message << endl;
    cout << "------------------------" << endl;
}
void subMenu(string submenu)
{
    string message = "Main Menu >" + submenu;
    cout << message << endl;
    cout << "------------------------" << endl;
}
void CandidateScreen(int idx)
{
    int option = 0;
    while (option != 13)
    {
        PrintHeader();
        option = UserMenu();
        if (option == 1)
        {
            system("cls");
            PrintHeader();

            cout << "Enter your name" << endl;
            cin >> name[idx];
            cout << "Enter your age" << endl;
            cin >> ages[idx];
            cout << "Enter your Phone Number" << endl;
            cin >> phoneNumbers[idx];
            cout << "Do you have any allergies (Yes/No)" << endl;
            cin >> Allergies[idx];
            cout << "Are you going through any treatments \n if yes write the treatment name else write (No)" << endl;
            getline(cin, Treatments[idx]);
            cout << "Enter your height in (centimeters)" << endl;
        }
        else if (option == 2)
        {
            string temppassword;
            cout << "Enter previous password" << endl;
            cin >> temppassword;
            if (passwordsCandidates[idx] == temppassword)
            {
                passwordsCandidates[idx] == temppassword;
            }
            else
            {
                cout << "Wrong password try again" << endl;
            }
        }
        else if (option == 3)
        {
            cout << "Enter the Academic scores" << endl;
            cin >> AcademicTest[idx];
            cout << "Enter the Intelligence Test Scores" << endl;
            cin >> IntelligenceTest[idx];
        }
        else if (option == 4)
        {
            cout << "Enter Physical Fitness Details" << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << "Enter " << TestNames[i] << " Test Results" << endl;
                cin >> PhysicalTest[i][idx];
            }
        }
        else if (option == 5)
        {
            cout << "Enter your level of Education (Highest degree Earned)" << endl;
            cin >> Education;
        }
        else if (option == 6)
        {
            // Educational Marks
            string option;
            cout << "Which marks do you want to update(Matric,Inter,University) \n minimum required Matric" << endl;
            cin >> option;
            if (option == "Inter" || option == "inter")
            {
                cin >> InterMarksPart[idx];
            }
            else if (option == "Matric" || option == "matric")
            {
                cin >> MatricMarks[idx];
            }
            else if (option == "University Marks" || option == "university Marks")
            {
                cin >> UniversityMarks[idx];
            }
        }
        else if (option == 7)
        {
            // Register a Complain
            cout << "Enter your complain";
            cin >> complain;
        }
        else if (option == 8)
        {
            // Registered Candidates
            cout << "Total Registered Candidates are = " << countUsers;
        }
        else if (option == 9)
        {
            subMenu("Candidate");
            cout << result[idx];
        }
        else if (option == 10)
        {
            cout << "Total Registered Candidates \t" << countUsers;
            cout << "Total Selected Candidates are " << endl;
            cout << "Name \t"
                 << " Age\t"
                 << " Performance\t" << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << TopCandidatesName[i] << "\t" << TopCandidatesAge << "\t" << TopCandidatesResult[i] << "\t";
            }
        }
        else if (option == 11)
        {
            cout << "Eligibility Criteria";
        }
        else
        {
            cout << "Wrong option Try again";
            CandidateScreen(idx);
        }
    }
}
void addCandidate(int idx)
{
    cout << "Candidate" << endl;
    cout << "Update name" << endl;
    getline(cin, namesCandidates[idx]);
    cout << "Change password" << endl;
    cin >> passwordsCandidates[idx];
    cout << "Add your Academic score" << endl;
    cin >> AcademicTest[idx];
    cout << "Add your Intelligence Test" << endl;
    cin >> IntelligenceTest[idx];
}
int adminMenu()
{

    char check = ' ';
    string condition = "false";
    while (condition == "false")
    {

        cout << "Press 1 To add Candidate" << endl;
        cout << "Press 2 to View the top candidates" << endl;
        cout << "Press 3 to Show a report" << endl;
        cout << "Press 4 to Modify the information of the candidates" << endl;
        cout << "Press 5 to Delete a candidate" << endl;
        cout << "Press 6 to Search a student" << endl;
        cout << "Press 7 to Update the test results of a student" << endl;
        cout << "Press 8 to See the complaints by the Students" << endl;
        cout << "Press 9 Set the test schedule" << endl;
        cin >> check;
        bool checkInput = validateInput(check);
        if (checkInput == true)
        {
            int option = converCharIntoInteger(check);
            condition = "true";
        }
    }
}
void AdminScreen(int idx)
{
    int adminOption = 0;
    while (adminOption != 10)
    {
        PrintHeader();
        subMenu("");
        adminOption = adminMenu();
        system("cls");
    }
    if (adminOption == 1)
    {
        addCandidate(idx);
    }
    else if (adminOption == 2)
    {
        cout << "Name \t"
             << " Performance \t"
             << " Age\t"
             << " Status";
        for (int i = 0; i < countUsers; i++)
        {
            cout << namesCandidates[idx] << " \t" << result[idx] << "\t" << agesCandidates[idx] << " Status" << endl;
        }
    }
    else if (adminOption == 3)
    {
        cout << "Total Registered Candidates \t" << countUsers;
        cout << "Total Selected Candidates are " << endl;
        cout << "Name \t"
             << " Age\t"
             << " Performance\t" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << TopCandidatesName[i] << "\t" << TopCandidatesAge << "\t" << TopCandidatesResult[i] << "\t";
        }
    }
    else if (adminOption == 4)
    {
        cout << "Enter the  name of the student that you want to modify" << endl;
        getline(cin, name);
        int idx = SearchString(name, "Candidate");
        addCandidate(idx);
    }
    else if (adminOption == 5)
    {
        cout << "Enter the name of the candidate you want to delete" << endl;
        getline(cin, name);
    }
}
int SearchString(string name, string role)
{
    int idx;
    if (role == "Candidate")
    {
        for (int i = 0; i < countUsers; i++)
        {
            if (namesCandidates[i] == name)
            {
                idx = i;
            }
        }
    }
    else if (role == "Staff")
    {
        for (int i = 0; i < countStaff; i++)
        {
            if (namesCandidates[i] == name)
            {
                idx = i;
            }
        }
    }
    return idx;
}

bool validateInput(char option)
{
    if (option == '1' || option == '2' || option == '3' || option == '4' || option == '5' || option == '6' || option == '7' || option == '8' || option == '9')
    {
        return true;
    }
    return false;
}
bool CheckEligibility(string name, string role, int IntelligenceTest, int MatricMarks, int interMarks, int height)
{
    int idx = SearchString(name, role);
    if (IntelligenceTest > 75 & ((MatricMarks / 1100) * 100) > 60 & ((interMarks / 1100)) * 100 > 60 & height > 162)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int converCharIntoInteger(char option)
{
    if (option == '0')
        return 0;
    else if (option == '1')
        return 1;
    else if (option == '2')
        return 2;
    else if (option == '3')
        return 3;
    else if (option == '4')
        return 4;
    else if (option == '5')
        return 5;
    else if (option == '6')
        return 6;
    else if (option == '7')
        return 7;
    else if (option == '8')
        return 8;
    else if (option == '9')
        return 9;
}

