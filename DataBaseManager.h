#pragma once

using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System::Data;
using namespace System;

ref class DataBaseManager {
public:
    DataBaseManager();
    void connect();
    void disconnect();
    MySqlConnection^ getConnection();

private:
    String^ connectionString;
    MySqlConnection^ conn;
};