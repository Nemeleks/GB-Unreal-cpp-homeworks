#pragma once
#include "Figure.h"
#include <math.h>
class Circle :
    public Figure
{
private:
    double radius;
public:
    Circle(double _radius) :
        radius(_radius)
    {}
    double area() override;
};

