#pragma once

#include "Flight.h"
#include "DataBaseManager.h"

using namespace System::Collections::Generic;

ref class FlightDAO
{
public:
	static void createFlight(Flight^ flight, DataBaseManager^ dbManager);
	static DataTable^ getFlightsInTable(DataBaseManager^ dbManager);
	static List<Flight^>^ getFlightsInComboBox(DataBaseManager^ dbManager);
	static Flight^ getFlightDetails(int flightId, DataBaseManager^ dbManager);
};

