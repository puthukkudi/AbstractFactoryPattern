#pragma once

#include"ICar.h"
#include"IBike.h"

class IFactory
{
public:
	virtual ICar* CreateCar() = 0;
	virtual IBike* CreateBike() = 0;
};