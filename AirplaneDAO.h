#pragma once
#include "DataBaseManager.h"
#include "Airplane.h"

using namespace System;
using namespace System::Collections::Generic;

ref class AirplaneDAO
{
public:
	static List<Airplane^>^ getAirplanes(DataBaseManager^ dbManager);
};

