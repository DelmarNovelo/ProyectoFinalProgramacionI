#pragma once

using namespace System;

/// Clase que representa una reserva de vuelo
ref class Reservation
{
public:
    // Constructor para inicializar una reserva con el ID del pasajero, ID del vuelo, precio, fecha de reserva, referencia de reserva y número de boleto.
    Reservation(int passengerId, int flightId, double price, String^ reservationDate, String^ bookingReference, String^ ticketNumber);

    // Constructor para inicializar una reserva con el ID del pase de abordar, nombre del pasajero, número de pasaporte, precio y fecha de reserva.
    Reservation(int boardingPassId, String^ passengerName, String^ passportNumber, double price, String^ reservationDate);

    // Propiedad para obtener y establecer el ID de la reserva.
    property int Id {
        int get() {
            return id;
        }
        void set(int value) {
            id = value;
        }
    }

    // Propiedad para obtener y establecer el ID del pasajero asociado a la reserva.
    property int PassengerId {
        int get() {
            return passengerId;
        }
        void set(int value) {
            passengerId = value;
        }
    }

    // Propiedad para obtener y establecer el nombre del pasajero asociado a la reserva.
    property String^ PassengerName {
        String^ get() {
            return passengerName;
        }
        void set(String^ value) {
            passengerName = value;
        }
    }

    // Propiedad para obtener y establecer el número de pasaporte del pasajero asociado a la reserva.
    property String^ PassportNumber {
        String^ get() {
            return passportNumber;
        }
        void set(String^ value) {
            passportNumber = value;
        }
    }

    // Propiedad para obtener y establecer el ID del vuelo asociado a la reserva.
    property int FlightId {
        int get() {
            return flightId;
        }
        void set(int value) {
            flightId = value;
        }
    }

    // Propiedad para obtener y establecer el precio de la reserva.
    property double Price {
        double get() {
            return price;
        }
        void set(double value) {
            price = value;
        }
    }

    // Propiedad para obtener y establecer la fecha de la reserva.
    property String^ ReservationDate {
        String^ get() {
            return reservationDate;
        }
        void set(String^ value) {
            reservationDate = value;
        }
    }

    // Propiedad para obtener y establecer la referencia de la reserva.
    property String^ BookingReference {
        String^ get() {
            return bookingReference;
        }
        void set(String^ value) {
            bookingReference = value;
        }
    }

    // Propiedad para obtener y establecer el número de boleto asociado a la reserva.
    property String^ TicketNumber {
        String^ get() {
            return ticketNumber;
        }
        void set(String^ value) {
            ticketNumber = value;
        }
    }

    // Propiedad para obtener y establecer el ID del pase de abordar asociado a la reserva.
    property int BoardingPassId {
        int get() {
            return boardingPassId;
        }
        void set(int value) {
            boardingPassId = value;
        }
    }

private:
    // Campos privados para almacenar los detalles de la reserva.
    property int id;
    property int passengerId;
    property String^ passengerName;
    property String^ passportNumber;
    property int flightId;
    property double price;
    int boardingPassId;
    property String^ reservationDate;
    property String^ bookingReference;
    property String^ ticketNumber;
};
