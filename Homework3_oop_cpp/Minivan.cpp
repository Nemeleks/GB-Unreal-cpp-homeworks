#include "Minivan.h"

Minivan::Minivan(std::string _company, std::string _model):
	Car(_company,_model)
{
	std::cout << "Minivan company: " << company << std::endl;
	std::cout << "Minivan model: " << model << std::endl;
}
