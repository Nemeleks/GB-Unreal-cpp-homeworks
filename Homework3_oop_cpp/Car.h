#pragma once
#include <iostream>
class Car
{
protected:
	std::string company;
	std::string model;
public:
	Car();
	Car(std::string _company, std::string _model);
};

