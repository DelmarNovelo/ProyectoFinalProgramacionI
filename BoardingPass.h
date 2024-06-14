#pragma once

using namespace System;

/// Representa un pase de abordar con información detallada sobre la reserva, el vuelo y el pasajero.
ref class BoardingPass
{
public:
    /// Constructor para inicializar un pase de abordar para guardar en la BD.
    BoardingPass(int reservationId, String^ seatNumber, String^ issueDate);

    /// Constructor para inicializar un pase de abordar con información recibida de la BD.
    BoardingPass(String^ seatNumber, String^ issueDate, double price,
        String^ reservationDate, String^ bookingReference, String^ ticketNumber, String^ passengerName,
        String^ airplaneModel, String^ originName, String^ destinationName, String^ airlineName, String^ departureTime,
        String^ boardingTime, String^ arrivalTime, String^ flightNumber, String^ originIataCode, String^ destinationIataCode);

    // Propiedad para el ID del pase de abordar
    property int BoardingPassId {
        int get() {
            return boardingPassId;
        }
        void set(int value) {
            boardingPassId = value;
        }
    }

    // Propiedad para el ID de la reserva asociada
    property int ReservationId {
        int get() {
            return reservationId;
        }
        void set(int value) {
            reservationId = value;
        }
    }

    // Propiedad para el número de asiento asignado
    property String^ SeatNumber {
        String^ get() {
            return seatNumber;
        }
        void set(String^ value) {
            seatNumber = value;
        }
    }

    // Propiedad para la fecha de emisión del pase de abordar
    property String^ IssueDate {
        String^ get() {
            return issueDate;
        }
        void set(String^ value) {
            issueDate = value;
        }
    }

    // Propiedad para el precio de la reserva
    property double Price {
        double get() {
            return price;
        }
        void set(double value) {
            price = value;
        }
    }

    // Propiedad para la fecha de la reserva
    property String^ ReservationDate {
        String^ get() {
            return reservationDate;
        }
        void set(String^ value) {
            reservationDate = value;
        }
    }

    // Propiedad para la referencia de la reserva
    property String^ BookingReference {
        String^ get() {
            return bookingReference;
        }
        void set(String^ value) {
            bookingReference = value;
        }
    }

    // Propiedad para el número del ticket
    property String^ TicketNumber {
        String^ get() {
            return ticketNumber;
        }
        void set(String^ value) {
            ticketNumber = value;
        }
    }

    // Propiedad para el nombre del pasajero
    property String^ PassengerName {
        String^ get() {
            return passengerName;
        }
        void set(String^ value) {
            passengerName = value;
        }
    }

    // Propiedad para el modelo del avión
    property String^ AirplaneModel {
        String^ get() {
            return airplaneModel;
        }
        void set(String^ value) {
            airplaneModel = value;
        }
    }

    // Propiedad para el nombre del aeropuerto de origen
    property String^ OriginName {
        String^ get() {
            return originName;
        }
        void set(String^ value) {
            originName = value;
        }
    }

    // Propiedad para el nombre del aeropuerto de destino
    property String^ DestinationName {
        String^ get() {
            return destinationName;
        }
        void set(String^ value) {
            destinationName = value;
        }
    }

    // Propiedad para el nombre de la aerolínea
    property String^ AirlineName {
        String^ get() {
            return airlineName;
        }
        void set(String^ value) {
            airlineName = value;
        }
    }

    // Propiedad para la hora de abordaje del vuelo
    property String^ BoardingTime {
        String^ get() {
            return boardingTime;
        }
        void set(String^ value) {
            boardingTime = value;
        }
    }

    // Propiedad para la hora de salida del vuelo
    property String^ DepartureTime {
        String^ get() {
            return departureTime;
        }
        void set(String^ value) {
            departureTime = value;
        }
    }

    // Propiedad para la hora de llegada del vuelo
    property String^ ArrivalTime {
        String^ get() {
            return arrivalTime;
        }
        void set(String^ value) {
            arrivalTime = value;
        }
    }

    // Propiedad para el número del vuelo
    property String^ FlightNumber {
        String^ get() {
            return flightNumber;
        }
        void set(String^ value) {
            flightNumber = value;
        }
    }

    // Propiedad para el código IATA del aeropuerto de origen
    property String^ OriginIataCode {
        String^ get() {
            return originIataCode;
        }
        void set(String^ value) {
            originIataCode = value;
        }
    }

    // Propiedad para el código IATA del aeropuerto de destino
    property String^ DestinationIataCode {
        String^ get() {
            return destinationIataCode;
        }
        void set(String^ value) {
            destinationIataCode = value;
        }
    }

private:
    int boardingPassId;          // ID del pase de abordar
    int reservationId;           // ID de la reserva asociada
    String^ seatNumber;          // Número de asiento asignado
    String^ issueDate;           // Fecha de emisión del pase de abordar
    double price;                // Precio de la reserva
    String^ reservationDate;     // Fecha de la reserva
    String^ bookingReference;    // Referencia de la reserva
    String^ ticketNumber;        // Número del ticket
    String^ passengerName;       // Nombre del pasajero
    String^ airplaneModel;       // Modelo del avión
    String^ originName;          // Nombre del aeropuerto de origen
    String^ destinationName;     // Nombre del aeropuerto de destino
    String^ airlineName;         // Nombre de la aerolínea
    String^ boardingTime;        // Hora de abordaje del vuelo
    String^ departureTime;       // Hora de salida del vuelo
    String^ arrivalTime;         // Hora de llegada del vuelo
    String^ flightNumber;        // Número del vuelo
    String^ originIataCode;      // Código IATA del aeropuerto de origen
    String^ destinationIataCode; // Código IATA del aeropuerto de destino
};
