#include "Bar.h"

Bar::Bar():
	y(0)
{
}

void Bar::setY(float a)
{
	if (y + a > 100)
	{
		throw Ex(a * y);
	}
	else
	{
		y = a;
	}
}

float Bar::getY() const
{
	return y;
}
