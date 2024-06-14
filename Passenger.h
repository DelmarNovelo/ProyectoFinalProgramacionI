#pragma once

using namespace System;

// Clase que representa a un pasajero con sus detalles personales.
ref class Passenger {
public:
    // Constructor que inicializa un pasajero con su nombre, apellido, teléfono, dirección, fecha de nacimiento y número de pasaporte.
    Passenger(String^ firstName, String^ lastName, String^ phone, String^ address, String^ birthDate, String^ passportNumber);

    // Propiedad para obtener y establecer el ID del pasajero.
    property int Id {
        int get() {
            return id;
        }
        void set(int value) {
            id = value;
        }
    }

    // Propiedad para obtener y establecer el nombre del pasajero.
    property String^ FirstName {
        String^ get() {
            return firstName;
        }
        void set(String^ value) {
            firstName = value->Trim();
        }
    }

    // Propiedad para obtener y establecer el apellido del pasajero.
    property String^ LastName {
        String^ get() {
            return lastName;
        }
        void set(String^ value) {
            lastName = value->Trim();
        }
    }

    // Propiedad para obtener el nombre completo del pasajero.
    property String^ FullName {
        String^ get() {
            return firstName + " " + lastName;
        }
    }

    // Propiedad para obtener y establecer el teléfono del pasajero.
    property String^ Phone {
        String^ get() {
            return phone;
        }
        void set(String^ value) {
            phone = value->Trim();
        }
    }

    // Propiedad para obtener y establecer la dirección del pasajero.
    property String^ Address {
        String^ get() {
            return address;
        }
        void set(String^ value) {
            address = value->Trim();
        }
    }

    // Propiedad para obtener y establecer la fecha de nacimiento del pasajero.
    property String^ BirthDate {
        String^ get() {
            return birthDate;
        }
        void set(String^ value) {
            birthDate = value->Trim();
        }
    }

    // Propiedad para obtener y establecer el número de pasaporte del pasajero.
    property String^ PassportNumber {
        String^ get() {
            return passportNumber;
        }
        void set(String^ value) {
            passportNumber = value->Trim();
        }
    }

private:
    // Campos privados para almacenar los detalles del pasajero.
    property int id;
    property String^ firstName;
    property String^ lastName;
    property String^ phone;
    property String^ address;
    property String^ birthDate;
    property String^ passportNumber;
};
