#include "pch.h"
#include "Reservation.h"
// Constructor para inicializar una reserva con el ID del pasajero, ID del vuelo, precio, fecha de reserva, referencia de reserva y número de boleto y guardarlo en la BD.
Reservation::Reservation(int passengerId, int flightId, double price, String^ reservationDate, String^ bookingReference, String^ ticketNumber) {
	this->PassengerId = passengerId;
	this->FlightId = flightId;
	this->Price = price;
	this->ReservationDate = reservationDate;
	this->BookingReference = bookingReference;
	this->TicketNumber = ticketNumber;
};

// Constructor para inicializar una reserva con información recibida de la BD
Reservation::Reservation(int boardingPassId, String^ passengerName, String^ passportNumber, double price, String^ reservationDate) {
	this->BoardingPassId = boardingPassId;
	this->PassengerName = passengerName;
	this->PassportNumber = passportNumber;
	this->Price = price;
	this->ReservationDate = reservationDate;
}
