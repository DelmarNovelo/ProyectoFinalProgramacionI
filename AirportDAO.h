#pragma once // Directiva pragma para garantizar la inclusión única de este archivo de encabezado

#include "DataBaseManager.h" // Incluye la declaración de la clase DataBaseManager
#include "Airport.h" // Incluye la declaración de la clase Airport

using namespace System::Collections::Generic; // Importa el espacio de nombres para utilizar colecciones genéricas

ref class AirportDAO
{
public:
	// Método estático para obtener todos los aeropuertos desde la base de datos
	static List<Airport^>^ getAirports(DataBaseManager^ dbManager);
};

