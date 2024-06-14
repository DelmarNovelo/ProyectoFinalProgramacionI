#include "pch.h"
#include "AirlineDAO.h" // Incluye la declaración de la clase AirlineDAO

using namespace System::Windows::Forms; // Espacio de nombres para Windows Forms
using namespace System::Collections::Generic; // Espacio de nombres para colecciones genéricas

// Método para obtener la lista de aerolíneas desde la base de datos
List<Airline^>^ AirlineDAO::getAirlines(DataBaseManager^ dbManager) {
    List<Airline^>^ airlines = gcnew List<Airline^>(); // Crea una lista de objetos Airline

    try {
        dbManager->connect(); // Establece la conexión con la base de datos

        // Consulta SQL para seleccionar todas las aerolíneas
        String^ query = "SELECT * FROM airline";

        // Crea un comando MySQL con la consulta y la conexión proporcionada por el administrador de la base de datos
        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

        // Ejecuta la consulta y obtiene un lector de datos
        MySqlDataReader^ reader = cmd->ExecuteReader();

        // Itera sobre los resultados del lector de datos
        while (reader->Read()) {
            int id = reader->GetInt32(0); // Obtiene el ID de la aerolínea desde la primera columna
            String^ name = reader->GetString(1); // Obtiene el nombre de la aerolínea desde la segunda columna
            String^ iataCode = reader->GetString(2); // Obtiene el código IATA de la aerolínea desde la tercera columna

            // Crea un objeto Airline con los datos obtenidos
            Airline^ airline = gcnew Airline(name, iataCode);
            airline->Id = id; // Establece el ID de la aerolínea

            airlines->Add(airline); // Agrega la aerolínea a la lista de aerolíneas
        }

        reader->Close(); // Cierra el lector de datos después de usarlo

        dbManager->disconnect(); // Cierra la conexión con la base de datos
    }
    catch (Exception^ e) {
        // Captura cualquier excepción que ocurra durante la obtención de las aerolíneas
        MessageBox::Show("Error al obtener las aerolíneas: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

    return airlines; // Devuelve la lista de aerolíneas obtenidas desde la base de datos
}
