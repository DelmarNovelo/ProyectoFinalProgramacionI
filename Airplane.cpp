#include "pch.h"
#include "Airplane.h"

// Constructor de la clase Airplane que inicializa las propiedades Model y Capacity
Airplane::Airplane(String^ model, int capacity) {
    // Asigna el valor del par�metro model a la propiedad Model
    this->Model = model;
    // Asigna el valor del par�metro capacity a la propiedad Capacity
    this->Capacity = capacity;
}
