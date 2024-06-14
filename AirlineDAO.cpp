#include "pch.h"
#include "AirlineDAO.h" // Incluye la declaraci�n de la clase AirlineDAO

using namespace System::Windows::Forms; // Espacio de nombres para Windows Forms
using namespace System::Collections::Generic; // Espacio de nombres para colecciones gen�ricas

// M�todo para obtener la lista de aerol�neas desde la base de datos
List<Airline^>^ AirlineDAO::getAirlines(DataBaseManager^ dbManager) {
    List<Airline^>^ airlines = gcnew List<Airline^>(); // Crea una lista de objetos Airline

    try {
        dbManager->connect(); // Establece la conexi�n con la base de datos

        // Consulta SQL para seleccionar todas las aerol�neas
        String^ query = "SELECT * FROM airline";

        // Crea un comando MySQL con la consulta y la conexi�n proporcionada por el administrador de la base de datos
        MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

        // Ejecuta la consulta y obtiene un lector de datos
        MySqlDataReader^ reader = cmd->ExecuteReader();

        // Itera sobre los resultados del lector de datos
        while (reader->Read()) {
            int id = reader->GetInt32(0); // Obtiene el ID de la aerol�nea desde la primera columna
            String^ name = reader->GetString(1); // Obtiene el nombre de la aerol�nea desde la segunda columna
            String^ iataCode = reader->GetString(2); // Obtiene el c�digo IATA de la aerol�nea desde la tercera columna

            // Crea un objeto Airline con los datos obtenidos
            Airline^ airline = gcnew Airline(name, iataCode);
            airline->Id = id; // Establece el ID de la aerol�nea

            airlines->Add(airline); // Agrega la aerol�nea a la lista de aerol�neas
        }

        reader->Close(); // Cierra el lector de datos despu�s de usarlo

        dbManager->disconnect(); // Cierra la conexi�n con la base de datos
    }
    catch (Exception^ e) {
        // Captura cualquier excepci�n que ocurra durante la obtenci�n de las aerol�neas
        MessageBox::Show("Error al obtener las aerol�neas: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

    return airlines; // Devuelve la lista de aerol�neas obtenidas desde la base de datos
}
