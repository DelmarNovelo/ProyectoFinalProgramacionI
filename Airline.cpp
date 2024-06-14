#include "pch.h"
#include "Airline.h"

// Implementaci�n del constructor de la clase Airline
// Este constructor inicializa una instancia de la clase Airline con el nombre y el c�digo IATA proporcionados
Airline::Airline(String^ name, String^ iataCode) {
    // Establece la propiedad Name con el valor del par�metro name
    this->Name = name;
    // Establece la propiedad IataCode con el valor del par�metro iataCode
    this->IataCode = iataCode;
}