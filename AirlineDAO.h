#pragma once
#include "DataBaseManager.h"
#include "Airline.h"

using namespace System::Collections::Generic;

ref class AirlineDAO
{
public:
	static List<Airline^>^ getAirlines(DataBaseManager^ dbManager);
};

