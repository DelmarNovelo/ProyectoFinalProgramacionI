#include "pch.h"
#include "Airplane.h"

Airplane::Airplane(String^ model, int capacity) {
	this->Model = model;
	this->Capacity = capacity;
}