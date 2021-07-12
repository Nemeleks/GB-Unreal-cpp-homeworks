#pragma once
#include "Car.h"
class Bus :
   virtual public Car
{
public:
	Bus();
	Bus(std::string _company, std::string _model);
};

