#include "Apple.h"

Apple::Apple() :
Fruit("Apple", "Green")
{}

Apple::Apple(std::string _color) :
	Fruit("Apple", _color)
{}

Apple::Apple(std::string _name, std::string _color) :

	Fruit(_name, _color)

{}


