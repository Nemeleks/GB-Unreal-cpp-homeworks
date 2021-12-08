#include "Car.h"

Car::Car():
	company(),
	model()
{
}

Car::Car(std::string _company, std::string _model):
	company(_company),
	model(_model)
{
}
