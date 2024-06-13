#include "pch.h"
#include "BoardingPassDAO.h"

using namespace System;
using namespace System::Windows::Forms;

void BoardingPassDAO::insertBoardingPass(BoardingPass^ boardingPass, DataBaseManager^ dbManager) {
	try
	{
		dbManager->connect();

		// Verificar si ya existe un pase de abordaje para esta reservación
		String^ validationQuery = "SELECT COUNT(*) FROM boarding_pass WHERE reservation_id = @reservation_id";
		MySqlCommand^ validationCmd = gcnew MySqlCommand(validationQuery, dbManager->getConnection());
		validationCmd->Parameters->AddWithValue("@reservation_id", boardingPass->ReservationId);

		int boardingPassCount = Convert::ToInt32(validationCmd->ExecuteScalar());

		if (boardingPassCount > 0) {
			throw gcnew Exception("Ya existe un pase de abordaje registrado para esta reservación");
		}

		String^ query = "INSERT INTO boarding_pass (reservation_id, seat_number, issue_date) VALUES (@reservation_id, @seat_number, @issue_date)";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		cmd->Parameters->AddWithValue("@reservation_id", boardingPass->ReservationId);
		cmd->Parameters->AddWithValue("@seat_number", boardingPass->SeatNumber);
		cmd->Parameters->AddWithValue("@issue_date", boardingPass->IssueDate);

		cmd->ExecuteNonQuery();

		MessageBox::Show("Pase de abordaje registrado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error registrando el pase de abordaje: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		dbManager->disconnect();
	}
}
