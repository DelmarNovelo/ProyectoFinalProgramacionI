#pragma once

using namespace System;

ref class Airline
{
public:
	Airline(String^ name, String^ iataCode);

	property int Id {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
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

	property String^ IataCode {
		String^ get() {
			return iataCode;
		}
		void set(String^ value) {
			iataCode = value;
		}
	}

private:
	property int id;
	property String^ name;
	property String^ iataCode;
};

