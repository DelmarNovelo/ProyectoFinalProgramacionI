#pragma once

#include "DataBaseManager.h"
#include "BoardingPass.h"

ref class BoardingPassDAO
{
public:
	static void insertBoardingPass(BoardingPass^ boardingPass, DataBaseManager^ dbManager);
};

