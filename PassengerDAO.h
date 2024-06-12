#pragma once

#include "DataBaseManager.h";
#include "Passenger.h"

using namespace System;
using namespace System::Collections::Generic;

ref class PassengerDAO {
public:
    static void createPassenger(Passenger^ pasajero, DataBaseManager^ dbManager);
    static DataTable^ getPassengers(DataBaseManager^ dbManager);
    static List<Passenger^>^ searchPassengers(String^ searchTerm, DataBaseManager^ dbManager);
    static Passenger^ getPassengerDetailsForEditting(int passengerId, DataBaseManager^ dbManager);
    static void updatePassenger(Passenger^ passenger, DataBaseManager^ dbManager);
    static void deletePassenger(int passengerId, DataBaseManager^ dbManager);
};

