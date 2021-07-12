#pragma once
#include "Parallelogram.h"
class Rectangle :
    public Parallelogram
{
private:
    double sideA;
    double sideB;
public:
    Rectangle(double _sideA, double _sideB);
    double area() override;
};

