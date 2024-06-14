#pragma once

using namespace MySql::Data::MySqlClient;  // Namespace para trabajar con MySQL
using namespace std;  // Namespace est�ndar de C++
using namespace System::Data;  // Namespace para tipos de datos de System.Data
using namespace System;  // Namespace principal de .NET

ref class DataBaseManager {
public:
    DataBaseManager();  // Constructor de la clase
    void connect();  // M�todo para conectar a la base de datos
    void disconnect();  // M�todo para desconectar de la base de datos
    MySqlConnection^ getConnection();  // M�todo para obtener la conexi�n actual a la base de datos

private:
    String^ connectionString;  // Cadena de conexi�n a la base de datos
    MySqlConnection^ conn;  // Objeto de conexi�n a la base de datos
};