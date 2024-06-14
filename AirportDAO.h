#pragma once // Directiva pragma para garantizar la inclusi�n �nica de este archivo de encabezado

#include "DataBaseManager.h" // Incluye la declaraci�n de la clase DataBaseManager
#include "Airport.h" // Incluye la declaraci�n de la clase Airport

using namespace System::Collections::Generic; // Importa el espacio de nombres para utilizar colecciones gen�ricas

ref class AirportDAO
{
public:
	// M�todo est�tico para obtener todos los aeropuertos desde la base de datos
	static List<Airport^>^ getAirports(DataBaseManager^ dbManager);
};

