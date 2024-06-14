#pragma once

using namespace MySql::Data::MySqlClient;  // Namespace para trabajar con MySQL
using namespace std;  // Namespace estándar de C++
using namespace System::Data;  // Namespace para tipos de datos de System.Data
using namespace System;  // Namespace principal de .NET

ref class DataBaseManager {
public:
    DataBaseManager();  // Constructor de la clase
    void connect();  // Método para conectar a la base de datos
    void disconnect();  // Método para desconectar de la base de datos
    MySqlConnection^ getConnection();  // Método para obtener la conexión actual a la base de datos

private:
    String^ connectionString;  // Cadena de conexión a la base de datos
    MySqlConnection^ conn;  // Objeto de conexión a la base de datos
};