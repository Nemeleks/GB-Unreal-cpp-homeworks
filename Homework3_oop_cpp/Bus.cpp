#include "Bus.h"

Bus::Bus()
{
}

Bus::Bus(std::string _company, std::string _model):
	Car(_company, _model)
{
	std::cout << "Bus company: " << company << std::endl;
	std::cout << "Bus model: " << model << std::endl;
}
