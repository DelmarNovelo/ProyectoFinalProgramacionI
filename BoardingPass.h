#pragma once

using namespace System;

ref class BoardingPass
{
public:
	BoardingPass(int reservationId, String^ seatNumber, String^ issueDate);

	property int ReservationId {
		int get() {
			return reservationId;
		}
		void set(int value) {
			reservationId = value;
		}
	}

	property String^ SeatNumber {
		String^ get() {
			return seatNumber;
		}
		void set(String^ value) {
			seatNumber = value;
		}
	}

	property String^ IssueDate {
		String^ get() {
			return issueDate;
		}
		void set(String^ value) {
			issueDate = value;
		}
	}

private:
	property int reservationId;
	property String^ seatNumber;
	property String^ issueDate;
};

