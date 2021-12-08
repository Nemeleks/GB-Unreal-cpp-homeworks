#pragma once
#include "Fruit.h"
class Apple :
    public Fruit
{
public:
    Apple();
    Apple(std::string _color);
    Apple(std::string _name, std::string _color);
};

