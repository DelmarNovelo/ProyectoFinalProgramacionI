#pragma once

#include "Flight.h" // Incluir la definición de la clase Flight
#include "DataBaseManager.h" // Incluir la definición de la clase DataBaseManager

using namespace System::Collections::Generic; // Espacio de nombres para usar List y otros tipos de colecciones

ref class FlightDAO
{
public:
	// Método estático para crear un nuevo vuelo en la base de datos
	static void createFlight(Flight^ flight, DataBaseManager^ dbManager);

	// Método estático para obtener todos los vuelos en formato DataTable
	static DataTable^ getFlightsInTable(DataBaseManager^ dbManager);

	// Método estático para obtener todos los vuelos en formato List para usar en ComboBox
	static List<Flight^>^ getFlightsInComboBox(DataBaseManager^ dbManager);

	// Método estático para obtener los detalles completos de un vuelo específico
	static Flight^ getFlightDetails(int flightId, DataBaseManager^ dbManager);
};