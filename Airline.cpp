#include "pch.h"
#include "Airline.h"

Airline::Airline(String^ name, String^ iataCode) {
	this->Name = name;
	this->IataCode = iataCode;
}