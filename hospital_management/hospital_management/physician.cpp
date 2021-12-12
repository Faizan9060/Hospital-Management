#include "physician.h"
using namespace std;
using namespace sql;
void print_physician_details()
{
    Driver* driver;
    Connection* con;
    Statement* stmt;
    ResultSet* res;
    PreparedStatement* pstmt;
    driver = get_driver_instance();
    con = driver->connect("tcp://localhost:3306", "root", "Faizan");
    con->setSchema("mydatabase");
    pstmt = con->prepareStatement("select * from physician order by physician_id desc;");
    res = pstmt->executeQuery();
    res->afterLast();
    while (res->previous()) {
        int id = res->getInt("physician_id");
        string name = res->getString("specialisation");
        cout << id << "\t\t\t" << name << endl;
    }
}
void read_physician_details()
{
    Driver* driver;
    Connection* con;
    Statement* stmt;
    ResultSet* res;
    PreparedStatement* pstmt;
    int physician_id;
    string specialisation;
    cout << "enter physician id" << endl;
    cin >> physician_id;
    cout << "enter specialisation" << endl;
    cin >> specialisation;
    pstmt = con->prepareStatement("INSERT INTO physician(physician_id, specialisation) VALUES('" + to_string(physician_id) + "', '" + specialisation + "')");
    res = pstmt->executeQuery();
    res->beforeFirst();
    while (res->next()) {
        int id = res->getInt("physician_id");
        string name = res->getString("specialisation");
        cout << id << "\t\t\t" << name << endl;
    }
    delete res;
    delete con;
}

