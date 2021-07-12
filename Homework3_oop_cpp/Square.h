#pragma once
#include "Parallelogram.h"
#include <math.h>
class Square :
    public Parallelogram
{
private:
    double side;
public:
    Square(double _side);
    double area()override;
};
