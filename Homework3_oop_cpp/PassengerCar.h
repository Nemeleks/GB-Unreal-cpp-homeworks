#pragma once
#include "Car.h"
class PassengerCar :
    virtual public Car
{
public:
    PassengerCar();
    PassengerCar(std::string _company, std::string _model);

};

