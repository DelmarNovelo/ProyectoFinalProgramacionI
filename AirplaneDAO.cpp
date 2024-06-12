#include "pch.h"
#include "AirplaneDAO.h"
#include "DataBaseManager.h"

using namespace System::Windows::Forms;

List<Airplane^>^ AirplaneDAO::getAirplanes(DataBaseManager^ dbManager) {
	List<Airplane^>^ airplanes = gcnew List<Airplane^>();

	try
	{
		dbManager->connect();

		String^ query = "SELECT * FROM airplane";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		MySqlDataReader^ reader = cmd->ExecuteReader();
	
		while (reader->Read()) {
			int id = reader->GetInt32(0);
			String^ model = reader->GetString(1);
			int capacity = reader->GetInt32(2);

			Airplane^ airplane = gcnew Airplane(model, capacity);
			airplane->Id = id;

			airplanes->Add(airplane);
		}

		reader->Close();

		dbManager->disconnect();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error al obtener los aviones: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	return airplanes;
}