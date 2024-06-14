#include "pch.h"
#include "ReservationDAO.h"
#include "DataBaseManager.h"
#include "Utils.h" // Supongo que Utils.h contiene algunas funciones �tiles

using namespace System;
using namespace System::Windows::Forms;

void ReservationDAO::insertReservation(Reservation^ reservation, DataBaseManager^ dbManager) {
	try
	{
		dbManager->connect(); // Conectar a la base de datos

		// Construir la consulta SQL para insertar una nueva reserva
		String^ query = "INSERT INTO reservation (passenger_id, flight_id, price, reservation_date, booking_reference, ticket_number) " +
			"VALUES(@passengerId, @flightId, @price, @reservationDate, @bookingReference, @ticketNumber)";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection()); // Crear comando MySqlCommand

		// Agregar par�metros con sus valores correspondientes desde el objeto Reservation
		cmd->Parameters->AddWithValue("@passengerId", reservation->PassengerId);
		cmd->Parameters->AddWithValue("@flightId", reservation->FlightId);
		cmd->Parameters->AddWithValue("@price", reservation->Price);
		cmd->Parameters->AddWithValue("@reservationDate", reservation->ReservationDate);
		cmd->Parameters->AddWithValue("@bookingReference", reservation->BookingReference);
		cmd->Parameters->AddWithValue("@ticketNumber", reservation->TicketNumber);

		// Ejecutar la consulta para insertar la reserva en la base de datos
		cmd->ExecuteNonQuery();

		// Mostrar un mensaje de �xito si la operaci�n fue exitosa
		MessageBox::Show("Reservaci�n registrada", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		// Capturar y mostrar cualquier excepci�n que ocurra durante la inserci�n de la reserva
		MessageBox::Show("Error registrando la reservaci�n: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Asegurarse de desconectar la base de datos al finalizar, incluso si ocurri� una excepci�n
		dbManager->disconnect();
	}
}
