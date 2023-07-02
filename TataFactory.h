#pragma once

#include "TataFactory.h"
#include "IFactory.h";

class TataFactory : public IFactory
{
	public :
		ICar* CreateCar() override;
		IBike* CreateBike() override;
};

