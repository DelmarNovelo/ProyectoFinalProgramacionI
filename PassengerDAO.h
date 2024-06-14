#pragma once

#include "DataBaseManager.h" // Incluir la definición de la clase DataBaseManager
#include "Passenger.h" // Incluir la definición de la clase Passenger

using namespace System; // Espacio de nombres para tipos básicos de .NET como String
using namespace System::Collections::Generic; // Espacio de nombres para usar List y otros tipos de colecciones

ref class PassengerDAO {
public:
    // Método estático para crear un nuevo pasajero en la base de datos
    static void createPassenger(Passenger^ pasajero, DataBaseManager^ dbManager);

    // Método estático para obtener todos los pasajeros en formato DataTable
    static DataTable^ getPassengers(DataBaseManager^ dbManager);

    // Método estático para buscar pasajeros por un término de búsqueda específico
    static List<Passenger^>^ searchPassengers(String^ searchTerm, DataBaseManager^ dbManager);

    // Método estático para obtener los detalles completos de un pasajero específico
    static Passenger^ getPassengerDetails(int passengerId, DataBaseManager^ dbManager);

    // Método estático para actualizar los datos de un pasajero en la base de datos
    static void updatePassenger(Passenger^ passenger, DataBaseManager^ dbManager);

    // Método estático para eliminar un pasajero de la base de datos
    static void deletePassenger(int passengerId, DataBaseManager^ dbManager);
};

