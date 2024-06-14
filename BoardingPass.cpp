#include "pch.h"
#include "BoardingPass.h"
BoardingPass::BoardingPass(int reservationId, String^ seatNumber, String^ issueDate) {
	this->ReservationId = reservationId;
	this->SeatNumber = seatNumber;
	this->IssueDate = issueDate;
}

BoardingPass::BoardingPass(String^ seatNumber, String^ issueDate, double price,
    String^ reservationDate, String^ bookingReference, String^ ticketNumber, String^ passengerName,
    String^ airplaneModel, String^ originName, String^ destinationName, String^ airlineName, String^ departureTime, 
    String^ boardingTime, String^ arrivalTime, String^ flightNumber, String^ originIataCode, String^ destinationIataCode) {
    this->SeatNumber = seatNumber;
    this->IssueDate = issueDate;
    this->Price = price;
    this->ReservationDate = reservationDate;
    this->BookingReference = bookingReference;
    this->TicketNumber = ticketNumber;
    this->PassengerName = passengerName;
    this->AirplaneModel = airplaneModel;
    this->OriginName = originName;
    this->DestinationName = destinationName;
    this->AirlineName = airlineName;
    this->DepartureTime = departureTime;
    this->BoardingTime = boardingTime;
    this->ArrivalTime = arrivalTime;
    this->FlightNumber = flightNumber;
    this->OriginIataCode = originIataCode;
    this->DestinationIataCode = destinationIataCode;
}