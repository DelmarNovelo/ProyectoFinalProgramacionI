#pragma once

using namespace System;

// Declaración de la clase Airport que representa un aeropuerto
ref class Airport
{
public:
    // Constructor de la clase Airport que inicializa las propiedades IataCode, Name, City y Country
    Airport(String^ iataCode, String^ name, String^ city, String^ country);

    // Propiedad Id con los métodos get y set
    property int Id {
        int get() {
            return id;
        }
        void set(int value) {
            id = value;
        }
    }

    // Propiedad IataCode con los métodos get y set
    property String^ IataCode {
        String^ get() {
            return iataCode;
        }
        void set(String^ value) {
            iataCode = value;
        }
    }

    // Propiedad Name con los métodos get y set
    property String^ Name {
        String^ get() {
            return name;
        }
        void set(String^ value) {
            name = value;
        }
    }

    // Propiedad City con los métodos get y set
    property String^ City {
        String^ get() {
            return city;
        }
        void set(String^ value) {
            city = value;
        }
    }

    // Propiedad Country con los métodos get y set
    property String^ Country {
        String^ get() {
            return country;
        }
        void set(String^ value) {
            country = value;
        }
    }

private:
    // Campo privado id
    property int id;
    // Campo privado iataCode
    property String^ iataCode;
    // Campo privado name
    property String^ name;
    // Campo privado city
    property String^ city;
    // Campo privado country
    property String^ country;
};
