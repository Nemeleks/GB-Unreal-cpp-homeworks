#include "Fraction.h"

Fraction::Fraction(int _numenator, int _denomenator)
{
	numenator = _numenator;
	if (_denomenator <= 0)
	{
		std::cout << "EROOR! Denomenator must be > 0" << std::endl;
		return;
	}
	else
	{
		denomenator = _denomenator;
	}
}

Fraction Fraction::operator-() const
{
	return Fraction(-numenator, denomenator);
}

void Fraction::printFraction() const
{
	std::cout << numenator << "/" << denomenator << std::endl;
}

Fraction operator+(Fraction const & fract1, Fraction const & fract2)
{
	Fraction fractResult(fract1.numenator, fract1.denomenator);

	if (fract1.denomenator == fract2.denomenator)
	{
		fractResult.numenator = fract1.numenator + fract2.numenator;
		return fractResult;
	}
	else
	{

		fractResult.denomenator = fract1.denomenator * fract2.denomenator;

		fractResult.numenator = fract1.numenator * fract2.denomenator + fract2.numenator * fract1.denomenator;
		while (fractResult.numenator % 7 == 0 && fractResult.denomenator % 7 == 0)
		{
			fractResult.numenator /= 7;
			fractResult.denomenator /= 7;
		}
		while (fractResult.numenator % 5 == 0 && fractResult.denomenator % 5 == 0)
		{
			fractResult.numenator /= 5;
			fractResult.denomenator /= 5;
		}
		while (fractResult.numenator % 3 == 0 && fractResult.denomenator % 3 == 0)
		{
			fractResult.numenator /= 3;
			fractResult.denomenator /= 3;
		}
		while (fractResult.numenator % 2 == 0 && fractResult.denomenator % 2 == 0)
		{
			fractResult.numenator /= 2;
			fractResult.denomenator /= 2;
		}
		return fractResult;
	}

}

Fraction operator-(Fraction const & fract1, Fraction const & fract2)
{
	Fraction fractResult(fract1.numenator, fract1.denomenator);

	if (fract1.denomenator == fract2.denomenator)
	{
		fractResult.numenator = fract1.numenator - fract2.numenator;
		return fractResult;
	}
	else
	{

		fractResult.denomenator = fract1.denomenator*fract2.denomenator;

		fractResult.numenator = fract1.numenator*fract2.denomenator - fract2.numenator*fract1.denomenator;
		while (fractResult.numenator % 7 == 0 && fractResult.denomenator % 7 == 0)
		{
			fractResult.numenator /= 7;
			fractResult.denomenator /= 7;
		}
		while (fractResult.numenator % 5 == 0 && fractResult.denomenator % 5 == 0)
		{
			fractResult.numenator /= 5;
			fractResult.denomenator /= 5;
		}
		while (fractResult.numenator % 3 == 0 && fractResult.denomenator % 3 == 0)
		{
			fractResult.numenator /= 3;
			fractResult.denomenator /= 3;
		}
		while (fractResult.numenator % 2 == 0 && fractResult.denomenator % 2 == 0)
		{
			fractResult.numenator /= 2;
			fractResult.denomenator /= 2;
		}
		return fractResult;
	}

}

Fraction operator*(Fraction const & fract1, Fraction const & fract2)
{
	Fraction fractResult(fract1.numenator, fract1.denomenator);
	fractResult.numenator = fract1.numenator * fract2.numenator;
	fractResult.denomenator = fract1.denomenator * fract2.denomenator;
	while (fractResult.numenator % 7 == 0 && fractResult.denomenator % 7 == 0)
	{
		fractResult.numenator /= 7;
		fractResult.denomenator /= 7;
	}
	while (fractResult.numenator % 5 == 0 && fractResult.denomenator % 5 == 0)
	{
		fractResult.numenator /= 5;
		fractResult.denomenator /= 5;
	}
	while (fractResult.numenator % 3 == 0 && fractResult.denomenator % 3 == 0)
	{
		fractResult.numenator /= 3;
		fractResult.denomenator /= 3;
	}
	while (fractResult.numenator % 2 == 0 && fractResult.denomenator % 2 == 0)
	{
		fractResult.numenator /= 2;
		fractResult.denomenator /= 2;
	}
	return fractResult;
}

Fraction operator/(Fraction const & fract1, Fraction const & fract2)
{
	Fraction fractResult(fract1.numenator, fract1.denomenator);
	fractResult.numenator = fract1.numenator * fract2.denomenator;
	fractResult.denomenator = fract1.denomenator * fract2.numenator;
	while (fractResult.numenator % 7 == 0 && fractResult.denomenator % 7 == 0)
	{
		fractResult.numenator /= 7;
		fractResult.denomenator /= 7;
	}
	while (fractResult.numenator % 5 == 0 && fractResult.denomenator % 5 == 0)
	{
		fractResult.numenator /= 5;
		fractResult.denomenator /= 5;
	}
	while (fractResult.numenator % 3 == 0 && fractResult.denomenator % 3 == 0)
	{
		fractResult.numenator /= 3;
		fractResult.denomenator /= 3;
	}
	while (fractResult.numenator % 2 == 0 && fractResult.denomenator % 2 == 0)
	{
		fractResult.numenator /= 2;
		fractResult.denomenator /= 2;
	}
	return fractResult;
}

bool operator==(Fraction const& fract1, Fraction const& fract2)
{
	if (fract1.denomenator == fract2.denomenator)
	{
		if (fract1.numenator == fract2.numenator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{		
		if (fract1.numenator*fract2.denomenator == fract2.numenator*fract1.denomenator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}

bool operator!=(Fraction const& fract1, Fraction const& fract2)
{
	if (fract1 == fract2)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool operator>(Fraction const& fract1, Fraction const& fract2)
{
	if (fract1.denomenator == fract2.denomenator)
	{
		if (fract1.numenator > fract2.numenator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (fract1.numenator * fract2.denomenator > fract2.numenator * fract1.denomenator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool operator<(Fraction const& fract1, Fraction const& fract2)
{
	if (fract1.denomenator == fract2.denomenator)
	{
		if (fract1.numenator < fract2.numenator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (fract1.numenator * fract2.denomenator < fract2.numenator * fract1.denomenator)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool operator>=(Fraction const& fract1, Fraction const& fract2)
{
	if (fract1 < fract2)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool operator<=(Fraction const& fract1, Fraction const& fract2)
{
	if (fract1 > fract2)
	{
		return false;
	}
	else
	{
		return true;
	}
}


