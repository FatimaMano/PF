#include <iostream>
using namespace std;
void calculatePatientRecord(int time_period);
main()
{
    int time_period;
    cout << "Enter the time period for the patients";
    cin >> time_period;
    calculatePatientRecord(time_period);
}
void calculatePatientRecord(int time_period)
{
    int doctors_available = 7;
    int patient_number = 0;
    int treated_patients = 0, untreated_patients = 0, untreated_patients1 = 0, treated_patients1 = 0;
    for (int i = 1; i <= time_period; i++)
    {
        cin >> patient_number;
         if (treated_patients < untreated_patients && i % 3 == 0)
        {
            doctors_available += 1;

        }
        if (patient_number <= doctors_available)
        {
            treated_patients += patient_number;
        }
        if (patient_number > doctors_available)
        {
            untreated_patients1 = patient_number - doctors_available;
            treated_patients1 = patient_number - untreated_patients1;
            treated_patients += treated_patients1;
            untreated_patients += untreated_patients1;
        }
       
    }

    cout << "Treated patients are " << treated_patients << endl;
    cout << "Untreated patients are " << untreated_patients << endl;
}