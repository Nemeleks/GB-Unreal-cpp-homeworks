#include "Parallelogram.h"

Parallelogram::Parallelogram() :
    sideA(0),
    heightA(0)
{
}

Parallelogram::Parallelogram(double _sideA, double _heightA) :
    sideA(_sideA),
    heightA(_heightA)
{}

double Parallelogram::area()
{
    return sideA * heightA;
}
