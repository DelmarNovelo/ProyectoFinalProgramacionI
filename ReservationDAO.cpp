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

		String^ query = "INSERT INTO reservation (passenger_id, flight_id, price, reservation_date, booking_reference, ticket_number) " + 
			"VALUES(@passengerId, @flightId, @price, @reservationDate, @bookingReference, @ticketNumber)";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		cmd->Parameters->AddWithValue("@passengerId", reservation->PassengerId);
		cmd->Parameters->AddWithValue("@flightId", reservation->FlightId);
		cmd->Parameters->AddWithValue("@price", reservation->Price);
		cmd->Parameters->AddWithValue("@reservationDate", reservation->ReservationDate);
		cmd->Parameters->AddWithValue("@bookingReference", reservation->BookingReference);
		cmd->Parameters->AddWithValue("@ticketNumber", reservation->TicketNumber);
		
		cmd->ExecuteNonQuery();

		MessageBox::Show("Reservaci�n registrada", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error registrando la reservaci�n: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		dbManager->disconnect();
	}
}
