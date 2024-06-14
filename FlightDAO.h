#pragma once

#include "Flight.h" // Incluir la definici�n de la clase Flight
#include "DataBaseManager.h" // Incluir la definici�n de la clase DataBaseManager

using namespace System::Collections::Generic; // Espacio de nombres para usar List y otros tipos de colecciones

ref class FlightDAO
{
public:
	// M�todo est�tico para crear un nuevo vuelo en la base de datos
	static void createFlight(Flight^ flight, DataBaseManager^ dbManager);

	// M�todo est�tico para obtener todos los vuelos en formato DataTable
	static DataTable^ getFlightsInTable(DataBaseManager^ dbManager);

	// M�todo est�tico para obtener todos los vuelos en formato List para usar en ComboBox
	static List<Flight^>^ getFlightsInComboBox(DataBaseManager^ dbManager);

	// M�todo est�tico para obtener los detalles completos de un vuelo espec�fico
	static Flight^ getFlightDetails(int flightId, DataBaseManager^ dbManager);
};