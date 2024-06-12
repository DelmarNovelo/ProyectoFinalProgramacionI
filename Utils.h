#pragma once

// Biblioteca para generar numeros randoms
#include <random>

using namespace System;

ref class Utils {
public:
	static String^ FormatTimeToHHmmss(DateTime time) {
		return time.ToString("HH:mm:ss");
	}

	static String^ FormatDateToyyyyMMdd(DateTime date) {
		return date.ToString("yyyy-MM-dd");
	}

	static int GenarateRandomNumbers(int start, int end) {
		// Crear un generador de números pseudoaleatorios
		std::random_device rd;
		std::mt19937 gen(rd());

		// Crear una distribución uniforme en el rango dado en los parametros
		std::uniform_int_distribution<int> dis(start, end);

		// Generar un número aleatorio
		return dis(gen);
	}

	static int ConvertStringToInt(String^ value) {
		int formattedValue = Convert::ToInt32(value);
		return formattedValue;
	}

	static int ConvertStringToDouble(String^ value) {
		double formattedValue = Convert::ToSingle(value);
		return formattedValue;
	}

};
