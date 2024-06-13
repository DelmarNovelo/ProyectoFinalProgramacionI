#include "pch.h"
#include "BoardingPass.h"
BoardingPass::BoardingPass(int reservationId, String^ seatNumber, String^ issueDate) {
	this->ReservationId = reservationId;
	this->SeatNumber = seatNumber;
	this->IssueDate = issueDate;
}