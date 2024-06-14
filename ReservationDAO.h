#pragma once

#include "Reservation.h"
#include "DataBaseManager.h"

using namespace System;

ref class ReservationDAO
{
public:
    /**
     * Esta funci�n ejecuta una consulta SQL para insertar los detalles de una reserva
     * en la tabla 'reservation' de la base de datos. Utiliza los datos proporcionados
     * en el objeto Reservation pasado como par�metro.
     */
    static void insertReservation(Reservation^ reservation, DataBaseManager^ dbManager);
};
