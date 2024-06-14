#include "pch.h"
#include "Flight.h"

Flight::Flight(String^ flightNumber, String^ date, String^ boardingTime, String^ departureTime, String^ arrivalTime, int airlineId, int airplaneId, int originId, int destinationId) {
	this->FlightNumber = flightNumber;
	this->Date = date;
	this->BoardingTime = boardingTime;
	this->DepartureTime = departureTime;
	this->ArrivalTime = arrivalTime;
	this->AirlineId = airlineId;
	this->AirplaneId = airplaneId;
	this->OriginId = originId;
	this->DestinationId = destinationId;
}

Flight::Flight(int id, String^ flightNumber, String^ date, String^ boardingTime, String^ departureTime, String^ arrivalTime, String^ airlineName, String^ airplaneModel, String^ originName, String^ destinationName) {
	this->FlightNumber = flightNumber;
	this->Date = date;
	this->BoardingTime = boardingTime;
	this->DepartureTime = departureTime;
	this->ArrivalTime = arrivalTime;
	this->AirlineName = airlineName;
	this->AirplaneModel = airplaneModel;
	this->OriginName = originName;
	this->DestinationName = destinationName;
};
