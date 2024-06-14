#pragma once // Directiva de preprocesador para garantizar la inclusión única de este archivo

#include "DataBaseManager.h" // Incluye la declaración de la clase DataBaseManager
#include "Airplane.h" // Incluye la declaración de la clase Airplane

using namespace System; // Espacio de nombres principal de System
using namespace System::Collections::Generic; // Espacio de nombres para colecciones genéricas

ref class AirplaneDAO
{
public:
    // Método estático para obtener la lista de aviones desde la base de datos
    static List<Airplane^>^ getAirplanes(DataBaseManager^ dbManager);
};
