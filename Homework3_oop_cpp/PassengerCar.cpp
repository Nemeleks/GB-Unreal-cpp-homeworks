#include "PassengerCar.h"

PassengerCar::PassengerCar()
{
}

PassengerCar::PassengerCar(std::string _company, std::string _model):
	Car(_company, _model)
{
	std::cout << "Passenger car company: " << company << std::endl;
	std::cout << "Passenger car model: " << model << std::endl;
}
