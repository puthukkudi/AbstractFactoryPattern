#pragma once

#include "IBike.h"
#include <iostream>
using namespace std;

class ToyotaBike : public IBike
{
	public:
		void RunVehicle() override;
};

