#include "pch.h"  // Archivo de precompilado para Visual Studio
#include "DataBaseManager.h"  // Incluye la declaraci�n de la clase DataBaseManager
#include <iostream>  // Incluye la librer�a est�ndar de C++ para entrada y salida

using namespace std;  // Espacio de nombres est�ndar de C++

using namespace System::Windows::Forms;  // Espacio de nombres para formularios de Windows
using namespace MySql::Data::MySqlClient;  // Espacio de nombres para MySQL Connector/NET

// Constructor de la clase DataBaseManager
DataBaseManager::DataBaseManager() {
    // Configura la cadena de conexi�n a la base de datos MySQL
    this->connectionString = "Server=localhost;port=3306;database=proyecto_final_programacion;uid=delmar;password=D39LKC#LS992@SLD8";
    // Crea una nueva instancia de MySqlConnection utilizando la cadena de conexi�n
    this->conn = gcnew MySqlConnection(this->connectionString);
}

// M�todo para establecer la conexi�n a la base de datos
void DataBaseManager::connect() {
    try {
        this->conn->Open();  // Abre la conexi�n
    }
    catch (Exception^ e) {
        MessageBox::Show("Error conectando");  // Muestra un mensaje de error en caso de excepci�n
    }
}

// M�todo para cerrar la conexi�n a la base de datos
void DataBaseManager::disconnect() {
    try {
        this->conn->Close();  // Cierra la conexi�n
    }
    catch (Exception^ e) {
        MessageBox::Show("Error desconectando");  // Muestra un mensaje de error en caso de excepci�n
    }
}

// M�todo para obtener la conexi�n actual a la base de datos
MySqlConnection^ DataBaseManager::getConnection() {
    return this->conn;  // Retorna el objeto de conexi�n actual
}