#include "pch.h"
#include "FlightDAO.h"

using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

void FlightDAO::createFlight(Flight^ flight, DataBaseManager^ dbManager) {
	try
	{
		dbManager->connect();

		String^ query = "INSERT INTO flight (flight_number, date, boarding_time, departure_time, arrival_time, airline_id, airplane_id, origin_id, destination_id) " +
			"VALUES (@flightNumber, @date, @boardingTime, @departureTime, @arrivalTime, @airlineId, @airplaneId, @originId, @destinationId)";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		cmd->Parameters->AddWithValue("@flightNumber", flight->FlightNumber);
		cmd->Parameters->AddWithValue("@date", flight->Date);
		cmd->Parameters->AddWithValue("@boardingTime", flight->BoardingTime);
		cmd->Parameters->AddWithValue("@departureTime", flight->DepartureTime);
		cmd->Parameters->AddWithValue("@arrivalTime", flight->ArrivalTime);
		cmd->Parameters->AddWithValue("@airlineId", flight->AirlineId);
		cmd->Parameters->AddWithValue("@airplaneId", flight->AirplaneId);
		cmd->Parameters->AddWithValue("@originId", flight->OriginId);
		cmd->Parameters->AddWithValue("@destinationId", flight->DestinationId);

		cmd->ExecuteNonQuery();

		MessageBox::Show("Vuelo registrado", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error registrando el vuelo: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		dbManager->disconnect();
	}
}

DataTable^ FlightDAO::getFlightsInTable(DataBaseManager^ dbManager) {
	DataTable^ dataTable = gcnew DataTable();

	try
	{
		dbManager->connect();

		String^ query = "SELECT	flight.id, flight.flight_number, DATE_FORMAT(flight.date, '%d/%m/%Y') AS date, flight.departure_time, flight.arrival_time, airline.name " +
			"AS airline_name, airplane.model AS airplane_model,	origin_airport.name AS origin_name,	destination_airport.name AS destination_name " +
			"FROM flight " +
			"JOIN airline ON flight.airline_id = airline.id " +
			"JOIN airplane ON flight.airplane_id = airplane.id " +
			"JOIN airport AS origin_airport ON flight.origin_id = origin_airport.id " +
			"JOIN airport AS destination_airport ON flight.destination_id = destination_airport.id;";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
		adapter->Fill(dataTable);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error al obtener los vuelos: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		dbManager->disconnect();
	}

	return dataTable;
}

List<Flight^>^ FlightDAO::getFlightsInComboBox(DataBaseManager^ dbManager) {
	List<Flight^>^ flights = gcnew List<Flight^>();

	try
	{
		dbManager->connect();

		String^ query = "SELECT	id, flight_number FROM flight";

		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			int id = reader->GetInt32(0);
			String^ flightCode = reader->GetString(1);

			Flight^ flight = gcnew Flight(flightCode, "", "", "", "", 0, 0, 0, 0);
			flight->Id = id;

			flights->Add(flight);
		}

		reader->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error al obtener los vuelos: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		dbManager->disconnect();
	}

	return flights;
}

Flight^ FlightDAO::getFlightDetails(int flightId, DataBaseManager^ dbManager) {

	Flight^ flightDetails = nullptr;

	try
	{
		dbManager->connect();

		String^ query = "SELECT " +
			"f.id AS flight_id, " +
			"f.flight_number, " +
			"f.date, " + 
			"f.boarding_time, " + 
			"f.departure_time, " +
			"f.arrival_time, " +
			"a.name AS airline_name, " +
			"ap.model AS airplane_model, " +
			"o.name AS origin_name, " +
			"d.name AS destination_name, " +
			"r.id AS reservation_id, " +
			"r.price, " +
			"r.reservation_date, " + 
			"p.id AS passenger_id, " +
			"CONCAT(p.first_name, ' ', p.last_name) AS passenger_name, " +
			"p.passport_number, " +
			"bp.id AS boarding_pass_id " +
			"FROM flight f " + 
			"LEFT JOIN reservation r ON f.id = r.flight_id " +
			"LEFT JOIN passenger p ON r.passenger_id = p.id " + 
			"LEFT JOIN airline a ON f.airline_id = a.id " + 
			"LEFT JOIN airplane ap ON f.airplane_id = ap.id " +
			"LEFT JOIN airport o ON f.origin_id = o.id " +
			"LEFT JOIN airport d ON f.destination_id = d.id " +
			"LEFT JOIN boarding_pass bp ON r.id = bp.reservation_id " +
			"WHERE f.id = @flightId"; 


		MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
		cmd->Parameters->AddWithValue("@flightId", flightId);

		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			if (flightDetails == nullptr) {
				flightDetails = gcnew Flight(
					reader->GetInt32("flight_id"),
					reader->GetString("flight_number"),
					reader->GetDateTime("date").ToString("dd-MM-yyyy"),
					reader->GetTimeSpan("boarding_time").ToString(),
					reader->GetTimeSpan("departure_time").ToString(),
					reader->GetTimeSpan("arrival_time").ToString(),
					reader->GetString("airline_name"),
					reader->GetString("airplane_model"),
					reader->GetString("origin_name"),
					reader->GetString("destination_name")
				);
			}

			if (!reader->IsDBNull(reader->GetOrdinal("reservation_id"))) {
				int boardingPassId = !reader->IsDBNull(reader->GetOrdinal("boarding_pass_id")) ? reader->GetInt32("boarding_pass_id") : 0;

				Reservation^ reservation = gcnew Reservation(
					boardingPassId,
					reader->GetString("passenger_name"),
					reader->GetString("passport_number"),
					reader->GetDouble("price"),
					reader->GetDateTime("reservation_date").ToString("dd-MM-yyyy")
				);

				reservation->Id = reader->GetInt32("reservation_id");

				flightDetails->Reservations->Add(reservation);
			}
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error al obtener los detalles del vuelo: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		dbManager->disconnect();
	}

	return flightDetails;
}

