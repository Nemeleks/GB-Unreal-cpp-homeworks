#include "Square.h"

Square::Square(double _side) :
    side(_side)
{
}

double Square::area()
{
    return pow(side, 2);
}



