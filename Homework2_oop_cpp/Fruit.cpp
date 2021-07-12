#include "Fruit.h"

Fruit::Fruit(std::string _name, std::string _color) :
	name(_name),
	color(_color)
{
}

std::string Fruit::getName() const
{
    return name;
}

std::string Fruit::getColor() const
{
    return color;
}
