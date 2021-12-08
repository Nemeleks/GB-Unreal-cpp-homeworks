#include "Rhombus.h"

Rhombus::Rhombus(double _diagA, double _diagB) :
	diagA(_diagA),
	diagB(_diagB)

{
}

double Rhombus::area()
{
	return (diagA*diagB) / 2;
}
