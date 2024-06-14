#include "pch.h"
#include "Airline.h"

// Implementación del constructor de la clase Airline
// Este constructor inicializa una instancia de la clase Airline con el nombre y el código IATA proporcionados
Airline::Airline(String^ name, String^ iataCode) {
    // Establece la propiedad Name con el valor del parámetro name
    this->Name = name;
    // Establece la propiedad IataCode con el valor del parámetro iataCode
    this->IataCode = iataCode;
}