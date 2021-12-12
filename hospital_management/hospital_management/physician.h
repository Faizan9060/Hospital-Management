#pragma once
#include<iostream>
#include<string>

#include <stdlib.h>
#include <iostream>

#include "mysql_connection.h"


#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;
using namespace sql;

using namespace std;
class physician
{
private:
	int physician_id;
public:
	Driver* driver;
	Connection* con;
	Statement* stmt;
	ResultSet* res;
	PreparedStatement* pstmt;
	string specialisation;
	physician();
	void print_physician_details();
	void read_physician_details();
};

