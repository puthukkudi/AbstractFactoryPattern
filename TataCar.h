#pragma once

#include "ICar.h"
#include <iostream>
using namespace std;

class TataCar : public ICar
{
	public :
		void RunVehicle() override;
};
