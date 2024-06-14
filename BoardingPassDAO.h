#pragma once

#include "DataBaseManager.h" // Incluye el archivo de encabezado de DataBaseManager
#include "BoardingPass.h"    // Incluye el archivo de encabezado de BoardingPass

ref class BoardingPassDAO
{
public:
	// Método estático para insertar un pase de abordar en la base de datos
	static void insertBoardingPass(BoardingPass^ boardingPass, DataBaseManager^ dbManager);

	// Método estático para obtener los detalles de un pase de abordar según su ID
	static BoardingPass^ getBoardingPassDetails(int boardingPassId, DataBaseManager^ dbManager);
};
