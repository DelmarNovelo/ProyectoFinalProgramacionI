#pragma once

using namespace System;

ref class Airplane
{
public:
	Airplane(String^ model, int capacity);

	property int Id {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}

	property String^ Model {
		String^ get() {
			return model;
		}
		void set(String^ value) {
			model = value;
		}
	}

	property int Capacity {
		int get() {
			return capacity;
		}
		void set(int value) {
			capacity = value;
		}
	}

private: 
	property int id;
	property String^ model;
	property int capacity;
};

