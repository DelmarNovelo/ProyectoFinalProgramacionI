#pragma once
#include "Reservation.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Flight
{
public:
	Flight(String^ flightNumber, String^ date, String^ departureTime, String^ arrivalTime, int airlineId, int airplaneId, int originId, int destinationId);

	Flight(int id, String^ flightNumber, String^ date, String^ departureTime, String^ arrivalTime, String^ airlineName, String^ airplaneModel, String^ originName, String^ destinationName);

	property List<Reservation^>^ Reservations {
		List<Reservation^>^ get() {
			return reservations;
		}
		void set(List<Reservation^>^ value) {
			reservations = value;
		}
	}

	property int Id {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
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

	property String^ Date {
		String^ get() {
			return date;
		}
		void set(String^ value) {
			date = value;
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

	property int AirlineId {
		int get() {
			return airlineId;
		}
		void set(int value) {
			airlineId = value;
		}
	}

	property int AirplaneId {
		int get() {
			return airplaneId;
		}
		void set(int value) {
			airplaneId = value;
		}
	}

	property int OriginId {
		int get() {
			return originId;
		}
		void set(int value) {
			originId = value;
		}
	}

	property int DestinationId {
		int get() {
			return destinationId;
		}
		void set(int value) {
			destinationId = value;
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

	property String^ AirplaneModel {
		String^ get() {
			return airplaneName;
		}
		void set(String^ value) {
			airplaneName = value;
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

private:
	property int id;
	property String^ flightNumber;
	property String^ date;
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
	List<Reservation^>^ reservations = gcnew List<Reservation^>();
};

