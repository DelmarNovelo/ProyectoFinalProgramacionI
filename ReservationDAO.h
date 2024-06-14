#pragma once

#include "Reservation.h"
#include "DataBaseManager.h"

ref class ReservationDAO
{
public:
	static void insertReservation(Reservation^ reservation, DataBaseManager^ dbManager);

};

