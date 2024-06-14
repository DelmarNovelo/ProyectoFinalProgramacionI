#include "pch.h" // Incluye el archivo de precompilación estándar de C++
#include "AirportDAO.h" // Incluye la declaración de la clase AirportDAO

using namespace System::Windows::Forms; // Espacio de nombres para usar MessageBox
using namespace System::Collections::Generic; // Espacio de nombres para usar List<>
using namespace MySql::Data::MySqlClient; // Espacio de nombres para usar MySqlCommand y MySqlDataReader

List<Airport^>^ AirportDAO::getAirports(DataBaseManager^ dbManager) {
	List<Airport^>^ airports = gcnew List<Airport^>(); // Crea una lista para almacenar los aeropuertos recuperados

	try
	{
		dbManager->connect(); // Conecta con la base de datos utilizando el objeto DataBaseManager recibido

		String^ query = "SELECT * FROM airport"; // Consulta SQL para seleccionar todos los aeropuertos

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crea un comando MySqlCommand con la consulta y la conexión

		MySqlDataReader^ reader = cmd->ExecuteReader(); // Ejecuta la consulta y obtiene un lector de datos

		// Itera sobre cada fila devuelta por el lector de datos
		while (reader->Read()) {
			int id = reader->GetInt32(0);         // Obtiene el ID del aeropuerto (columna 0 en la tabla)
			String^ name = reader->GetString(1);  // Obtiene el nombre del aeropuerto (columna 1 en la tabla)
			String^ city = reader->GetString(3);  // Obtiene la ciudad del aeropuerto (columna 3 en la tabla)
			String^ country = reader->GetString(4);  // Obtiene el país del aeropuerto (columna 4 en la tabla)
			String^ iataCode = reader->GetString(2); // Obtiene el código IATA del aeropuerto (columna 2 en la tabla)

			// Crea un objeto Airport con los datos obtenidos y lo agrega a la lista
			Airport^ airport = gcnew Airport(iataCode, name, city, country);
			airport->Id = id; // Asigna el ID al objeto Airport

			airports->Add(airport); // Agrega el aeropuerto a la lista de aeropuertos
		}

		reader->Close(); // Cierra el lector de datos

		dbManager->disconnect(); // Desconecta de la base de datos
	}
	catch (Exception^ e)
	{
		// Captura y muestra un mensaje de error en caso de excepción
		MessageBox::Show("Error al obtener los aeropuertos: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	return airports; // Devuelve la lista de aeropuertos recuperados
}
