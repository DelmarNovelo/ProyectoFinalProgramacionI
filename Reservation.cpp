#include "pch.h"
#include "Reservation.h"
Reservation::Reservation(int passengerId, int flightId, double price, String^ reservationDate, String^ bookingReference, String^ ticketNumber) {
	this->PassengerId = passengerId;
	this->FlightId = flightId;
	this->Price = price;
	this->ReservationDate = reservationDate;
	this->BookingReference = bookingReference;
	this->TicketNumber = ticketNumber;
};

Reservation::Reservation(int boardingPassId, String^ passengerName, String^ passportNumber, double price, String^ reservationDate) {
	this->BoardingPassId = boardingPassId;
	this->PassengerName = passengerName;
	this->PassportNumber = passportNumber;
	this->Price = price;
	this->ReservationDate = reservationDate;
}