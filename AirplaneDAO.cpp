#include "pch.h" // Incluye el archivo de encabezado precompilado (si est� presente)
#include "AirplaneDAO.h" // Incluye la declaraci�n de la clase AirplaneDAO
#include "DataBaseManager.h" // Incluye la declaraci�n de la clase DataBaseManager

using namespace System::Windows::Forms; // Espacio de nombres para elementos de Windows Forms

List<Airplane^>^ AirplaneDAO::getAirplanes(DataBaseManager^ dbManager) {
    List<Airplane^>^ airplanes = gcnew List<Airplane^>(); // Crea una lista para almacenar los aviones recuperados desde la base de datos

    try
    {
        dbManager->connect(); // Intenta establecer la conexi�n con la base de datos

        String^ query = "SELECT * FROM airplane"; // Consulta SQL para seleccionar todos los aviones

        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crea un comando MySQL con la consulta y la conexi�n

        MySqlDataReader^ reader = cmd->ExecuteReader(); // Ejecuta la consulta y obtiene un lector de datos

        while (reader->Read()) {
            int id = reader->GetInt32(0); // Obtiene el ID del avi�n desde la columna 0 (primer columna)
            String^ model = reader->GetString(1); // Obtiene el modelo del avi�n desde la columna 1
            int capacity = reader->GetInt32(2); // Obtiene la capacidad del avi�n desde la columna 2

            Airplane^ airplane = gcnew Airplane(model, capacity); // Crea un nuevo objeto Airplane con el modelo y la capacidad obtenidos
            airplane->Id = id; // Asigna el ID al objeto Airplane

            airplanes->Add(airplane); // Agrega el objeto Airplane a la lista de aviones
        }

        reader->Close(); // Cierra el lector de datos

        dbManager->disconnect(); // Cierra la conexi�n con la base de datos
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Error al obtener los aviones: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        // Muestra un mensaje de error si ocurre alguna excepci�n durante la recuperaci�n de los aviones
    }

    return airplanes; // Devuelve la lista de aviones recuperados desde la base de datos
}
