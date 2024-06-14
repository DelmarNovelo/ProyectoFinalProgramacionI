#pragma once

using namespace System;

ref class BoardingPass
{
public:
    BoardingPass(int reservationId, String^ seatNumber, String^ issueDate);

    BoardingPass(String^ seatNumber, String^ issueDate, double price,
        String^ reservationDate, String^ bookingReference, String^ ticketNumber, String^ passengerName,
        String^ airplaneModel, String^ originName, String^ destinationName, String^ airlineName, String^ departureTime, 
        String^ boardingTime, String^ arrivalTime, String^ flightNumber, String^ originIataCode, String^ destinationIataCode);

    property int BoardingPassId {
        int get() {
            return boardingPassId;
        }
        void set(int value) {
            boardingPassId = value;
        }
    }

    property int ReservationId {
        int get() {
            return reservationId;
        }
        void set(int value) {
            reservationId = value;
        }
    }

    property String^ SeatNumber {
        String^ get() {
            return seatNumber;
        }
        void set(String^ value) {
            seatNumber = value;
        }
    }

    property String^ IssueDate {
        String^ get() {
            return issueDate;
        }
        void set(String^ value) {
            issueDate = value;
        }
    }

    property double Price {
        double get() {
            return price;
        }
        void set(double value) {
            price = value;
        }
    }

    property String^ ReservationDate {
        String^ get() {
            return reservationDate;
        }
        void set(String^ value) {
            reservationDate = value;
        }
    }

    property String^ BookingReference {
        String^ get() {
            return bookingReference;
        }
        void set(String^ value) {
            bookingReference = value;
        }
    }

    property String^ TicketNumber {
        String^ get() {
            return ticketNumber;
        }
        void set(String^ value) {
            ticketNumber = value;
        }
    }

    property String^ PassengerName {
        String^ get() {
            return passengerName;
        }
        void set(String^ value) {
            passengerName = value;
        }
    }

    property String^ AirplaneModel {
        String^ get() {
            return airplaneModel;
        }
        void set(String^ value) {
            airplaneModel = value;
        }
    }

    property String^ OriginName {
        String^ get() {
            return originName;
        }
        void set(String^ value) {
            originName = value;
        }
    }

    property String^ DestinationName {
        String^ get() {
            return destinationName;
        }
        void set(String^ value) {
            destinationName = value;
        }
    }

    property String^ AirlineName {
        String^ get() {
            return airlineName;
        }
        void set(String^ value) {
            airlineName = value;
        }
    }

    property String^ BoardingTime {
        String^ get() {
            return boardingTime;
        }
        void set(String^ value) {
            boardingTime = value;
        }
    }

    property String^ DepartureTime {
        String^ get() {
            return departureTime;
        }
        void set(String^ value) {
            departureTime = value;
        }
    }

    property String^ ArrivalTime {
        String^ get() {
            return arrivalTime;
        }
        void set(String^ value) {
            arrivalTime = value;
        }
    }

    property String^ FlightNumber {
        String^ get() {
            return flightNumber;
        }
        void set(String^ value) {
            flightNumber = value;
        }
    }

    property String^ OriginIataCode {
        String^ get() {
            return originIataCode;
        }
        void set(String^ value) {
            originIataCode = value;
        }
    }

    property String^ DestinationIataCode {
        String^ get() {
            return destinationIataCode;
        }
        void set(String^ value) {
            destinationIataCode = value;
        }
    }

private:
    int boardingPassId;
    int reservationId;
    String^ seatNumber;
    String^ issueDate;
    double price;
    String^ reservationDate;
    String^ bookingReference;
    String^ ticketNumber;
    String^ passengerName;
    String^ airplaneModel;
    String^ originName;
    String^ destinationName;
    String^ airlineName;
    String^ boardingTime;
    String^ departureTime;
    String^ arrivalTime; 
    String^ flightNumber;
    String^ originIataCode;
    String^ destinationIataCode;
};
