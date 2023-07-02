#include "ToyotaFactory.h"
#include "ToyotaCar.h"
#include "ToyotaBike.h"

ICar* ToyotaFactory::CreateCar()
{
	return new ToyotaCar();	
}

IBike* ToyotaFactory::CreateBike()
{
	return new ToyotaBike();
}
