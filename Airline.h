#pragma once

using namespace System;

ref class Airline
{
public:
	// Constructor de la clase Airline que inicializa el nombre y el código IATA de la aerolínea
	Airline(String^ name, String^ iataCode);

	// Propiedad Id con métodos getter y setter
	// Esta propiedad representa el identificador único de la aerolínea
	property int Id {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}

	// Propiedad Name con métodos getter y setter
	// Esta propiedad representa el nombre de la aerolínea
	property String^ Name {
		String^ get() {
			return name;
		}
		void set(String^ value) {
			name = value;
		}
	}

	// Propiedad IataCode con métodos getter y setter
	// Esta propiedad representa el código IATA de la aerolínea
	property String^ IataCode {
		String^ get() {
			return iataCode;
		}
		void set(String^ value) {
			iataCode = value;
		}
	}

private:
	// Campo privado que almacena el identificador único de la aerolínea
	property int id;
	// Campo privado que almacena el nombre de la aerolínea
	property String^ name;
	// Campo privado que almacena el código IATA de la aerolínea
	property String^ iataCode;
};