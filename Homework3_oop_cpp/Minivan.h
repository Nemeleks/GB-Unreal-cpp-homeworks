#pragma once
#include "PassengerCar.h"
#include "Bus.h"
class Minivan :
    public PassengerCar, public Bus
{
public:
    Minivan(std::string _company, std::string _model);
};

