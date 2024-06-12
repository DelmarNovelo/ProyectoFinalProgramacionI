#include "pch.h"
#include "Airport.h"

Airport::Airport(String^ iataCode, String^ name, String^ city, String^ country) {
	this->IataCode = iataCode;
	this->Name = name;
	this->City = city;
	this->Country = country;
}