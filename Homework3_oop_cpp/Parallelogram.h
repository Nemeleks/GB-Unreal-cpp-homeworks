#pragma once
#include "Figure.h"
class Parallelogram :
    public Figure
{
private:
    double sideA;
    double heightA;
public:
     Parallelogram();
     Parallelogram(double _sideA, double _heightA);
    double area() override;
};

