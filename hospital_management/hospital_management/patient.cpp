#include "patient.h"
using namespace std;
using namespace sql;
void read_patient_details()
{
    Driver* driver1;
    Connection* con1;
    Statement* stmt1;
    ResultSet* res1;
    PreparedStatement* pstmt1;
    int patient_id;
    string patient_name, admitted_on, admitted_by, atime;
    cout << "enter patient id" << endl;
    cin >> patient_id;
    cout << "enter name of the patient" << endl;
    cin >> patient_name;
    cout << "enter the id of the physician who admitted the patient" << endl;
    cin >> admitted_by;
    cout << "enter date of admission" << endl;
    cin >> admitted_on;
    cout << "enter the time of admission in 24 hours format" << endl;
    cin >> atime;
    pstmt1 = con1->prepareStatement("INSERT INTO patient(patient_id, patient_name,admitted_by,admitted_on,atime) VALUES('" + to_string(patient_id) + "', '" + patient_name + "','" + admitted_by + "','" + admitted_on + "','" + atime + "')");
    res1 = pstmt1->executeQuery();
    res1->beforeFirst();
    while (res1->next()) {
        int pt_id = res1->getInt("patient_id");
        string n = res1->getString("patient_name");
        string a = res1->getString("admitted_by");
        string d = res1->getString("admitted_on");
        string r = res1->getString("atime");
    }
    delete res1;delete con1;
}
void print_patient_details()
{
    Driver* driver1;
    Connection* con1;
    Statement* stmt1;
    ResultSet* res1;
    PreparedStatement* pstmt1;
    driver1 = get_driver_instance();
    con1 = driver1->connect("tcp://localhost:3306", "root", "Faizan");
    con1->setSchema("mydatabase");
    pstmt1 = con1->prepareStatement("select * from patient;");
    res1 = pstmt1->executeQuery();
    res1->afterLast();
    while (res1->previous()) {

        int pt_id = res1->getInt("patient_id");
        string n = res1->getString("patient_name");
        string a = res1->getString("admitted_by");
        string d = res1->getString("admitted_on");
        string r = res1->getString("atime");

        cout << pt_id << "\t\t" << n << "\t\t" << a << "\t" << d << "\t" << r << endl;
    }
}
