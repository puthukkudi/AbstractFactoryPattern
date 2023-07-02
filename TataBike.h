#pragma once

#include "IBike.h"
#include <iostream>
using namespace std;

class TataBike : public IBike
{
	public:
		void RunVehicle() override;
};

