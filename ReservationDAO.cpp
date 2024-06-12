#include "pch.h"
#include "ReservationDAO.h"
#include "DataBaseManager.h"
#include "Utils.h"

using namespace System;
using namespace System::Windows::Forms;

void ReservationDAO::insertReservation(Reservation^ reservation, DataBaseManager^ dbManager) {
	try
	{
		dbManager->connect();

		String^ query = "INSERT INTO reservation (passenger_id, flight_id, price, reservation_date) VALUES (@passengerId, @flightId, @price, @reservationDate)";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		cmd->Parameters->AddWithValue("@passengerId", reservation->PassengerId);
		cmd->Parameters->AddWithValue("@flightId", reservation->FlightId);
		cmd->Parameters->AddWithValue("@price", reservation->Price);
		cmd->Parameters->AddWithValue("@reservationDate", reservation->ReservationDate);
		
		cmd->ExecuteNonQuery();

		MessageBox::Show("Reservación registrada", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error registrando la reservación: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		dbManager->disconnect();
	}
}
