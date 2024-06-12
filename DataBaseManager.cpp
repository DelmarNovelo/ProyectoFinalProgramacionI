#include "pch.h"
#include "DataBaseManager.h"
#include <iostream>

using namespace std;

using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;

DataBaseManager::DataBaseManager() {
	this->connectionString = "Server=localhost;port=3306;database=proyecto_final_programacion;uid=delmar;password=D39LKC#LS992@SLD8";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void DataBaseManager::connect() {
    try {
        this->conn->Open();
    }
    catch (Exception^ e) {
        MessageBox::Show("Error conectando");
    }
}

void DataBaseManager::disconnect() {
    try {
        this->conn->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Error desconectando");
    }
}

MySqlConnection^ DataBaseManager::getConnection() {
	return this->conn;
}
