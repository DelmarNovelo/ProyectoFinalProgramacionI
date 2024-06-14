#include "pch.h"
#include "BoardingPassDAO.h"

using namespace System;
using namespace System::Windows::Forms;

void BoardingPassDAO::insertBoardingPass(BoardingPass^ boardingPass, DataBaseManager^ dbManager) {
	try
	{
		dbManager->connect(); // Conectar a la base de datos

		// Verificar si ya existe un pase de abordaje para esta reservación
		String^ validationQuery = "SELECT COUNT(*) FROM boarding_pass WHERE reservation_id = @reservation_id";
		MySqlCommand^ validationCmd = gcnew MySqlCommand(validationQuery, dbManager->getConnection());
		validationCmd->Parameters->AddWithValue("@reservation_id", boardingPass->ReservationId);

		// Ejecutar la consulta y obtener el resultado
		int boardingPassCount = Convert::ToInt32(validationCmd->ExecuteScalar());

		// Si ya existe un pase de abordaje, lanzar una excepción
		if (boardingPassCount > 0) {
			throw gcnew Exception("Ya existe un pase de abordaje registrado para esta reservación");
		}

		// Preparar la consulta para insertar el nuevo pase de abordaje
		String^ query = "INSERT INTO boarding_pass (reservation_id, seat_number, issue_date) VALUES (@reservation_id, @seat_number, @issue_date)";
		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		// Asignar los parámetros necesarios para la consulta de inserción
		cmd->Parameters->AddWithValue("@reservation_id", boardingPass->ReservationId);
		cmd->Parameters->AddWithValue("@seat_number", boardingPass->SeatNumber);
		cmd->Parameters->AddWithValue("@issue_date", boardingPass->IssueDate);

		// Ejecutar la consulta de inserción
		cmd->ExecuteNonQuery();

		// Mostrar un mensaje de éxito si la operación fue exitosa
		MessageBox::Show("Pase de abordaje registrado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		// Capturar cualquier excepción y mostrar un mensaje de error
		MessageBox::Show("Error registrando el pase de abordaje: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Desconectar de la base de datos al finalizar, independientemente del resultado
		dbManager->disconnect();
	}
}

BoardingPass^ BoardingPassDAO::getBoardingPassDetails(int boardingPassId, DataBaseManager^ dbManager) {
	try
	{
		dbManager->connect(); // Conectar a la base de datos

		// Consulta para obtener los detalles completos de un pase de abordaje
		String^ query = "SELECT " +
			"bp.id AS boarding_pass_id, " +
			"bp.seat_number, " +
			"bp.issue_date, " +
			"r.id AS reservation_id, " +
			"r.price, " +
			"r.reservation_date, " +
			"r.booking_reference, " +
			"r.ticket_number, " +
			"CONCAT(p.first_name, ' ', p.last_name) AS passenger_name, " +
			"a.model AS airplane_model, " +
			"o.name AS origin_name, " +
			"d.name AS destination_name, " +
			"o.iata_code AS origin_iata, " +
			"d.iata_code AS destination_iata, " +
			"al.name AS airline_name, " +
			"f.boarding_time, " +
			"f.departure_time, " +
			"f.arrival_time, " +
			"f.flight_number " +
			"FROM " +
			"boarding_pass bp " +
			"JOIN reservation r ON bp.reservation_id = r.id " +
			"JOIN passenger p ON r.passenger_id = p.id " +
			"JOIN flight f ON r.flight_id = f.id " +
			"JOIN airplane a ON f.airplane_id = a.id " +
			"JOIN airport o ON f.origin_id = o.id " +
			"JOIN airport d ON f.destination_id = d.id " +
			"JOIN airline al ON f.airline_id = al.id " +
			"WHERE bp.id = @boardingPassId"; // Filtrar por el ID del pase de abordaje

		// Preparar el comando SQL con parámetros
		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
		cmd->Parameters->AddWithValue("@boardingPassId", boardingPassId);

		// Ejecutar la consulta y obtener el resultado
		MySqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read()) {
			// Construir un objeto BoardingPass utilizando los datos obtenidos de la consulta
			BoardingPass^ boardingPass = gcnew BoardingPass(
				reader["seat_number"]->ToString(),
				reader["issue_date"]->ToString(),
				Convert::ToDouble(reader["price"]),
				reader->GetDateTime("reservation_date").ToString("dd/MM/yyyy"),
				reader["booking_reference"]->ToString(),
				reader["ticket_number"]->ToString(),
				reader["passenger_name"]->ToString(),
				reader["airplane_model"]->ToString(),
				reader["origin_name"]->ToString(),
				reader["destination_name"]->ToString(),
				reader["airline_name"]->ToString(),
				reader["departure_time"]->ToString(),
				reader["boarding_time"]->ToString(),
				reader["arrival_time"]->ToString(),
				reader["flight_number"]->ToString(),
				reader["origin_iata"]->ToString(),
				reader["destination_iata"]->ToString()
			);

			return boardingPass; // Devolver el objeto BoardingPass creado
		}
		else {
			throw gcnew Exception("La reservación seleccionada no cuenta con un pase de abordaje generado.");
		}
	}
	catch (Exception^ e)
	{
		// Capturar cualquier excepción y mostrar un mensaje de error
		MessageBox::Show("Error obteniendo los detalles del pase de abordaje: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Desconectar de la base de datos al finalizar, independientemente del resultado
		dbManager->disconnect();
	}
}
