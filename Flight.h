#pragma once
#include "Reservation.h"

using namespace System;
using namespace System::Collections::Generic;

// Representa un vuelo con información detallada sobre el número de vuelo, fechas, horarios, y los IDs de la aerolínea, avión, origen y destino.
ref class Flight
{
public:
    // Constructor para inicializar un vuelo e ingresarlo a la BD.
    Flight(String^ flightNumber, String^ date, String^ boardingTime, String^ departureTime, String^ arrivalTime, int airlineId, int airplaneId, int originId, int destinationId);

    // Constructor para inicializar un vuelo con información detallada recibida de la BD.
    Flight(int id, String^ flightNumber, String^ date, String^ boardingTime, String^ departureTime, String^ arrivalTime, String^ airlineName, String^ airplaneModel, String^ originName, String^ destinationName);

    // Propiedad para obtener y establecer la lista de reservaciones del vuelo
    property List<Reservation^>^ Reservations {
        List<Reservation^>^ get() {
            return reservations;
        }
        void set(List<Reservation^>^ value) {
            reservations = value;
        }
    }

    // Propiedad para obtener y establecer el ID del vuelo
    property int Id {
        int get() {
            return id;
        }
        void set(int value) {
            id = value;
        }
    }

    // Propiedad para obtener y establecer el número del vuelo
    property String^ FlightNumber {
        String^ get() {
            return flightNumber;
        }
        void set(String^ value) {
            flightNumber = value;
        }
    }

    // Propiedad para obtener y establecer la fecha del vuelo
    property String^ Date {
        String^ get() {
            return date;
        }
        void set(String^ value) {
            date = value;
        }
    }

    // Propiedad para obtener y establecer la hora de abordaje
    property String^ BoardingTime {
        String^ get() {
            return boardingTime;
        }
        void set(String^ value) {
            boardingTime = value;
        }
    }

    // Propiedad para obtener y establecer la hora de salida
    property String^ DepartureTime {
        String^ get() {
            return departureTime;
        }
        void set(String^ value) {
            departureTime = value;
        }
    }

    // Propiedad para obtener y establecer la hora de llegada
    property String^ ArrivalTime {
        String^ get() {
            return arrivalTime;
        }
        void set(String^ value) {
            arrivalTime = value;
        }
    }

    // Propiedad para obtener y establecer el ID de la aerolínea
    property int AirlineId {
        int get() {
            return airlineId;
        }
        void set(int value) {
            airlineId = value;
        }
    }

    // Propiedad para obtener y establecer el ID del avión
    property int AirplaneId {
        int get() {
            return airplaneId;
        }
        void set(int value) {
            airplaneId = value;
        }
    }

    // Propiedad para obtener y establecer el ID del aeropuerto de origen
    property int OriginId {
        int get() {
            return originId;
        }
        void set(int value) {
            originId = value;
        }
    }

    // Propiedad para obtener y establecer el ID del aeropuerto de destino
    property int DestinationId {
        int get() {
            return destinationId;
        }
        void set(int value) {
            destinationId = value;
        }
    }

    // Propiedad para obtener y establecer el nombre de la aerolínea
    property String^ AirlineName {
        String^ get() {
            return airlineName;
        }
        void set(String^ value) {
            airlineName = value;
        }
    }

    // Propiedad para obtener y establecer el modelo del avión
    property String^ AirplaneModel {
        String^ get() {
            return airplaneName;
        }
        void set(String^ value) {
            airplaneName = value;
        }
    }

    // Propiedad para obtener y establecer el nombre del aeropuerto de origen
    property String^ OriginName {
        String^ get() {
            return originName;
        }
        void set(String^ value) {
            originName = value;
        }
    }

    // Propiedad para obtener y establecer el nombre del aeropuerto de destino
    property String^ DestinationName {
        String^ get() {
            return destinationName;
        }
        void set(String^ value) {
            destinationName = value;
        }
    }

private:
    // Campos privados para almacenar la información del vuelo
    property int id;
    property String^ flightNumber;
    property String^ date;
    property String^ boardingTime;
    property String^ departureTime;
    property String^ arrivalTime;
    property int airlineId;
    property int airplaneId;
    property int originId;
    property int destinationId;
    property String^ airlineName;
    property String^ airplaneName;
    property String^ originName;
    property String^ destinationName;
    List<Reservation^>^ reservations = gcnew List<Reservation^>(); // Lista de reservaciones asociadas al vuelo
};
