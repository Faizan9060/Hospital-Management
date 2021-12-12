#include <stdlib.h>
#include <iostream>
#include "physician.h"
#include "patient.h"
#include "treatment_details.h"
using namespace std;
using namespace sql;
int main()
{   physician phy;
    patient pat;
    treatment_details treat;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout << "\t\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
    cout << "\t\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
    cout << "\t\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
    cout << "\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n";
    int c;
    do
    {
        cout << "\n\n\n\n\t\t\t\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM \n\n";
        cout << "\n\n\t\t\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
        cout << "\t\t\t\t\t\t\t _________________________________________________________________\n";
        cout << "\t\t\t\t\t\t\t|                                           	                  |\n";
        cout << "\t\t\t\t\t\t\t|             1  >> print patient details                         |\n";
        cout << "\t\t\t\t\t\t\t|             2  >> read patient details                          |\n";
        cout << "\t\t\t\t\t\t\t|             3  >> read physician details                        |\n";
        cout << "\t\t\t\t\t\t\t|             4  >> print physician details                       |\n";
        cout << "\t\t\t\t\t\t\t|             5  >> read treatment details                        |\n";
        cout << "\t\t\t\t\t\t\t|             6  >> print treatment details                       |\n";
        cout << "\t\t\t\t\t\t\t|             7  >> exit                                          |\n";
        cout << "\t\t\t\t\t\t\t|_________________________________________________________________|\n\n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "PATIENT ID\tPATIENT NAME\tADMITTED ON\tDISCHARGED ON\tRESULT" << endl;
            pat.print_patient_details();
            break;
        case 2:
            pat.read_patient_details(); break;
        case 3:
            phy.read_physician_details(); break;
        case 4:
            cout << "PHYSICIAN ID\t\tSPECILIZATION" << endl;
            phy.print_physician_details(); break;
        case 5:
            treat.read_treatment_details(); break;

        case 6:
            cout << "PATIENT ID\tDISCHARGED BY\tDISCHARGED ON\tTIME\tTREATMENT STATUS" << endl;
            treat.print_treatment_details(); break;
        case 7:
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
            cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
            cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
            cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
            cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
            cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
            cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
            cout << "\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
            cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
            cout << "\t\t\t\t\t@@|                            HOSPITAL MANAGEMENT SYSTEM                                 |@@\n";
            cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
            cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
            cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
            cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
            cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
            cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
            cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
            cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
            break;
        default:
            cout << "invalid choice\n";
        }
    } while (c != 7);

}