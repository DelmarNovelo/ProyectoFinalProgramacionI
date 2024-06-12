#pragma once

using namespace System;

ref class Airport
{
public:
	Airport(String^ iataCode, String^ name, String^ city, String^ country);

	property int Id {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}

	property String^ IataCode {
		String^ get() {
			return iataCode;
		}
		void set(String^ value) {
			iataCode= value;
		}
	}

	property String^ Name {
		String^ get() {
			return name;
		}
		void set(String^ value) {
			name = value;
		}
	}

	property String^ City {
		String^ get() {
			return city;
		}
		void set(String^ value) {
			city= value;
		}
	}

	property String^ Country {
		String^ get() {
			return country;
		}
		void set(String^ value) {
			country = value;
		}
	}

private:
	property int id;
	property String^ iataCode;
	property String^ name;
	property String^ city;
	property String^ country;
};

