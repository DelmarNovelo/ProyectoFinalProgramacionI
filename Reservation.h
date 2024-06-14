#pragma once

using namespace System;

ref class Reservation
{
public:
	Reservation(int passengerId, int flightId, double price, String^ reservationDate, String^ bookingReference, String^ ticketNumber);

	Reservation(int boardingPassId, String^ passengerName, String^ passportNumber, double price, String^ reservationDate);

	property int Id {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}

	property int PassengerId {
		int get() {
			return passengerId;
		}
		void set(int value) {
			passengerId = value;
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

	property String^ PassportNumber {
		String^ get() {
			return passportNumber;
		}
		void set(String^ value) {
			passportNumber = value;
		}
	}

	property int FlightId {
		int get() {
			return flightId;
		}
		void set(int value) {
			flightId = value;
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

	property int BoardingPassId {
		int get() {
			return boardingPassId;
		}
		void set(int value) {
			boardingPassId = value;
		}
	}

private:
	property int id;
	property int passengerId;
	property String^ passengerName;
	property String^ passportNumber;
	property int flightId;
	property double price;
	int boardingPassId;
	property String^ reservationDate;
	property String^ bookingReference;
	property String^ ticketNumber;
};

