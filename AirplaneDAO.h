#pragma once // Directiva de preprocesador para garantizar la inclusi�n �nica de este archivo

#include "DataBaseManager.h" // Incluye la declaraci�n de la clase DataBaseManager
#include "Airplane.h" // Incluye la declaraci�n de la clase Airplane

using namespace System; // Espacio de nombres principal de System
using namespace System::Collections::Generic; // Espacio de nombres para colecciones gen�ricas

ref class AirplaneDAO
{
public:
    // M�todo est�tico para obtener la lista de aviones desde la base de datos
    static List<Airplane^>^ getAirplanes(DataBaseManager^ dbManager);
};
