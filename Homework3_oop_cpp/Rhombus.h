#pragma once
#include "Parallelogram.h"
class Rhombus :
    public Parallelogram
{
private:
    double diagA;
    double diagB;
public:
    Rhombus(double _diagA, double _diagB);
    double area() override;
};

