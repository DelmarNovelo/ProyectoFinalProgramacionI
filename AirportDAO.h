#pragma once
#include "DataBaseManager.h"
#include "Airport.h"

using namespace System::Collections::Generic;

ref class AirportDAO
{
public:
	static List<Airport^>^ getAirports(DataBaseManager^ dbManager);
};

