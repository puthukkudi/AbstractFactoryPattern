#include "VehicleFactory.h"
#include "TataFactory.h"
#include "ToyotaFactory.h"

IFactory* VehicleFactory::GetFactory(string factoryType)
{
    if (factoryType == "Tata")
    {
        return new TataFactory();
    }
    else if (factoryType == "Toyota")
    {
        return new ToyotaFactory();
    }
    else
    {
        return new TataFactory();
    }
}
