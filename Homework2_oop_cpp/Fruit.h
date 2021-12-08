#pragma once
#include <iostream>
class Fruit
{
protected:
	std::string name;
	std::string color;
public:
	Fruit(std::string _name, std::string _color);
	std::string getName() const;
	std::string getColor() const;
};

