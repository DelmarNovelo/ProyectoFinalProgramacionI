#pragma once

using namespace System;

ref class Airline
{
public:
	// Constructor de la clase Airline que inicializa el nombre y el c�digo IATA de la aerol�nea
	Airline(String^ name, String^ iataCode);

	// Propiedad Id con m�todos getter y setter
	// Esta propiedad representa el identificador �nico de la aerol�nea
	property int Id {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}

	// Propiedad Name con m�todos getter y setter
	// Esta propiedad representa el nombre de la aerol�nea
	property String^ Name {
		String^ get() {
			return name;
		}
		void set(String^ value) {
			name = value;
		}
	}

	// Propiedad IataCode con m�todos getter y setter
	// Esta propiedad representa el c�digo IATA de la aerol�nea
	property String^ IataCode {
		String^ get() {
			return iataCode;
		}
		void set(String^ value) {
			iataCode = value;
		}
	}

private:
	// Campo privado que almacena el identificador �nico de la aerol�nea
	property int id;
	// Campo privado que almacena el nombre de la aerol�nea
	property String^ name;
	// Campo privado que almacena el c�digo IATA de la aerol�nea
	property String^ iataCode;
};