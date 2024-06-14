#pragma once

#include "DataBaseManager.h" // Incluir la definici�n de la clase DataBaseManager
#include "Passenger.h" // Incluir la definici�n de la clase Passenger

using namespace System; // Espacio de nombres para tipos b�sicos de .NET como String
using namespace System::Collections::Generic; // Espacio de nombres para usar List y otros tipos de colecciones

ref class PassengerDAO {
public:
    // M�todo est�tico para crear un nuevo pasajero en la base de datos
    static void createPassenger(Passenger^ pasajero, DataBaseManager^ dbManager);

    // M�todo est�tico para obtener todos los pasajeros en formato DataTable
    static DataTable^ getPassengers(DataBaseManager^ dbManager);

    // M�todo est�tico para buscar pasajeros por un t�rmino de b�squeda espec�fico
    static List<Passenger^>^ searchPassengers(String^ searchTerm, DataBaseManager^ dbManager);

    // M�todo est�tico para obtener los detalles completos de un pasajero espec�fico
    static Passenger^ getPassengerDetails(int passengerId, DataBaseManager^ dbManager);

    // M�todo est�tico para actualizar los datos de un pasajero en la base de datos
    static void updatePassenger(Passenger^ passenger, DataBaseManager^ dbManager);

    // M�todo est�tico para eliminar un pasajero de la base de datos
    static void deletePassenger(int passengerId, DataBaseManager^ dbManager);
};

