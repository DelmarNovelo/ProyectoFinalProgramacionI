#include "pch.h"
#include "ReservationDAO.h"
#include "DataBaseManager.h"
#include "Utils.h" // Supongo que Utils.h contiene algunas funciones útiles

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

		// Agregar parámetros con sus valores correspondientes desde el objeto Reservation
		cmd->Parameters->AddWithValue("@passengerId", reservation->PassengerId);
		cmd->Parameters->AddWithValue("@flightId", reservation->FlightId);
		cmd->Parameters->AddWithValue("@price", reservation->Price);
		cmd->Parameters->AddWithValue("@reservationDate", reservation->ReservationDate);
		cmd->Parameters->AddWithValue("@bookingReference", reservation->BookingReference);
		cmd->Parameters->AddWithValue("@ticketNumber", reservation->TicketNumber);

		// Ejecutar la consulta para insertar la reserva en la base de datos
		cmd->ExecuteNonQuery();

		// Mostrar un mensaje de éxito si la operación fue exitosa
		MessageBox::Show("Reservación registrada", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		// Capturar y mostrar cualquier excepción que ocurra durante la inserción de la reserva
		MessageBox::Show("Error registrando la reservación: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Asegurarse de desconectar la base de datos al finalizar, incluso si ocurrió una excepción
		dbManager->disconnect();
	}
}
