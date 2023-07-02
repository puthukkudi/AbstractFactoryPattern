#pragma once
#include "ToyotaFactory.h"
#include "IFactory.h"

class ToyotaFactory : public IFactory
{
	public:
		ICar* CreateCar() override;
		IBike* CreateBike() override;
};

