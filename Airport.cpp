#include "pch.h"
#include "Airport.h"

// Implementación del constructor de la clase Airport
// Este constructor inicializa las propiedades IataCode, Name, City y Country con los valores proporcionados
Airport::Airport(String^ iataCode, String^ name, String^ city, String^ country) {
    this->IataCode = iataCode;
    this->Name = name;
    this->City = city;
    this->Country = country;
}
