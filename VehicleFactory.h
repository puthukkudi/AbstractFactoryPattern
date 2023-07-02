#pragma once

#include "IFactory.h"
#include <iostream>
#include <string>
using namespace std;

class VehicleFactory
{
	public:
		 static IFactory * GetFactory(string factoryType);
};

