#pragma once

using namespace System;

ref class Passenger {
public:
	Passenger(String^ firstName, String^ lastName, String^ phone, String^ address, String^ birthDate, String^ passportNumber);

    // Propiedades
    property int Id {
        int get() {
            return id;
        }
        void set(int value) {
            id = value;
        }
    }

    property String^ FirstName {
        String^ get() {
            return firstName;
        }
        void set(String^ value) {
            firstName = value->Trim();
        }
    }

    property String^ LastName {
        String^ get() {
            return lastName;
        }
        void set(String^ value) {
            lastName = value->Trim();
        }
    }

    property String^ FullName {
        String^ get() {
            return firstName + " " + lastName;
        }
    }

    property String^ Phone {
        String^ get() {
            return phone;
        }
        void set(String^ value) {
            phone = value->Trim();
        }
    }

    property String^ Address {
        String^ get() {
            return address;
        }
        void set(String^ value) {
            address = value->Trim();
        }
    }

    property String^ BirthDate {
        String^ get() {
            return birthDate;
        }
        void set(String^ value) {
            birthDate = value->Trim();
        }
    }

    property String^ PassportNumber {
        String^ get() {
            return passportNumber;
        }
        void set(String^ value) {
            passportNumber = value->Trim();
        }
    }

private:
    property int id;
    property String^ firstName;
    property String^ lastName;
    property String^ phone;
    property String^ address;
    property String^ birthDate;
    property String^ passportNumber;
};

