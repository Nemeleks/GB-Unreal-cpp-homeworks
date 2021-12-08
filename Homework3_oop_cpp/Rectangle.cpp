#include "Rectangle.h"

Rectangle::Rectangle(double _sideA, double _sideB) :
        sideA(_sideA),
        sideB(_sideB)
    {}

double Rectangle::area()
{
    return sideA*sideB;
}
