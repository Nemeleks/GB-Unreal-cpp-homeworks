#pragma once
#include <iostream>
class Fraction
{
private:
	int numenator;
	unsigned denomenator;
public:
	Fraction(int _numenator, int _denomenator);
	friend Fraction operator+ (Fraction const & fract1, Fraction const & fract2);
	friend Fraction operator- (Fraction const & fract1, Fraction const & fract2);
	friend Fraction operator* (Fraction const & fract1, Fraction const & fract2);
	friend Fraction operator/ (Fraction const & fract1, Fraction const & fract2);
	friend bool operator== (Fraction const& fract1, Fraction const& fract2);
	friend bool operator!= (Fraction const& fract1, Fraction const& fract2);
	friend bool operator> (Fraction const& fract1, Fraction const& fract2);
	friend bool operator< (Fraction const& fract1, Fraction const& fract2);
	friend bool operator>= (Fraction const& fract1, Fraction const& fract2);
	friend bool operator<= (Fraction const& fract1, Fraction const& fract2);
	Fraction operator-() const;
	void printFraction() const;
};

