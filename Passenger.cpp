#include "pch.h"
#include "Passenger.h"

Passenger::Passenger(String^ firstName, String^ lastName, String^ phone, String^ address, String^ birthDate, String^ passportNumber) {
	this->FirstName = firstName;
	this->LastName= lastName;
	this->Phone = phone;
	this->Address = address;
	this->BirthDate = birthDate;
	this->PassportNumber = passportNumber;
}
