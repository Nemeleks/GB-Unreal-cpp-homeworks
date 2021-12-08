#include "Figure.h"
#include "Minivan.h"
#include "Fraction.h"
#include "Card.h"

int main()

{
	//Bus bus("LAZ", "697-E");
	//PassengerCar pasCar("BMW", "M5");
	//Minivan minivan("VolksWagen", "Caravella");
	Fraction a(1, 2);
	Fraction b(1, 3);
	Fraction q(2, 6);
	Fraction d = a / b;
	Fraction e = a + b;
	Fraction j = a - b;
	Fraction k = a * b;
	Fraction l = -a;
	d.printFraction();
	e.printFraction();
	j.printFraction();
	k.printFraction();
	l.printFraction();
	if (a == b)
	{
		std::cout << "a = b" << std::endl;
	}
	if (b == q)
	{
		std::cout << "q = b" << std::endl;
	}
	if (a > b)
	{
		std::cout << "a > b" << std::endl;
	}

	Card card(CardSuit::Hearts, CardDignity::Jack, true);
	std::cout << card.GetValue() << std::endl;
}