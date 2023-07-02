#include "TataFactory.h"
#include "TataCar.h"
#include "TataBike.h"

ICar* TataFactory::CreateCar()
{
	return new TataCar();	
}

IBike* TataFactory::CreateBike()
{
	return new TataBike();
}
