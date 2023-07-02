#pragma once

#include "ICar.h"
#include <iostream>
using namespace std;

class ToyotaCar : public ICar
{
    public:
        void RunVehicle() override;
};

