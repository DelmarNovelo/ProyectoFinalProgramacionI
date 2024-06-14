#pragma once

#include "DataBaseManager.h" // Incluye el archivo de encabezado de DataBaseManager
#include "BoardingPass.h"    // Incluye el archivo de encabezado de BoardingPass

ref class BoardingPassDAO
{
public:
	// M�todo est�tico para insertar un pase de abordar en la base de datos
	static void insertBoardingPass(BoardingPass^ boardingPass, DataBaseManager^ dbManager);

	// M�todo est�tico para obtener los detalles de un pase de abordar seg�n su ID
	static BoardingPass^ getBoardingPassDetails(int boardingPassId, DataBaseManager^ dbManager);
};
