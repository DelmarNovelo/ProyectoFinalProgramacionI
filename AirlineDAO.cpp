#include "pch.h"
#include "AirlineDAO.h"

using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

List<Airline^>^ AirlineDAO::getAirlines(DataBaseManager^ dbManager) {
	List<Airline^>^ airlines = gcnew List<Airline^>();
	try
	{
		dbManager->connect();

		String^ query = "SELECT * FROM airline";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			int id = reader->GetInt32(0);
			String^ name = reader->GetString(1);
			String^ iataCode = reader->GetString(2);

			Airline^ airline = gcnew Airline(name, iataCode);
			airline->Id = id;

			airlines->Add(airline);
		}

		reader->Close();

		dbManager->disconnect();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error al obtener las aerolineas: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	return airlines;
}
