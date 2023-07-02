#include "VehicleFactory.h"
#include "IFactory.h"
#include <string>
using namespace std;

int main()
{
	string type;
	
	cout << "Enter the type : ";
	cin >> type;
	cout << endl;

	IFactory* factory = VehicleFactory::GetFactory(type);
	IBike* bike = factory->CreateBike();
	bike->RunVehicle();
	ICar* car = factory->CreateCar();
	car->RunVehicle();

}