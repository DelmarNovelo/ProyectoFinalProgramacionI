#include "pch.h"
#include "Reservation.h"
Reservation::Reservation(int passengerId, int flightId, double price, String^ reservationDate) {
	this->PassengerId = passengerId;
	this->FlightId = flightId;
	this->Price = price;
	this->ReservationDate = reservationDate;
};

Reservation::Reservation(String^ passengerName, String^ passportNumber, double price, String^ reservationDate) {
	this->PassengerName = passengerName;
	this->PassportNumber = passportNumber;
	this->Price = price;
	this->ReservationDate = reservationDate;
}