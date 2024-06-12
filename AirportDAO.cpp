#include "pch.h"
#include "AirportDAO.h"

using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

List<Airport^>^ AirportDAO::getAirports(DataBaseManager^ dbManager) {
	List<Airport^>^ airports = gcnew List<Airport^>();

	try
	{
		dbManager->connect();

		String^ query = "SELECT * FROM airport";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			int id = reader->GetInt32(0);         // Primer columna: id
			String^ name = reader->GetString(1);  // Segunda columna: name
			String^ city = reader->GetString(3);     // Cuarta columna: city
			String^ country = reader->GetString(4);  // Quinta columna: country
			String^ iataCode = reader->GetString(2); // Tercera columna: iata_code
		
			Airport^ airport = gcnew Airport(iataCode, name, city, country);
			airport->Id = id;

			airports->Add(airport);
		}

		reader->Close();

		dbManager->disconnect();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error al obtener los aeropuertos: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	return airports;
}
