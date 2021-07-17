#include <iostream>
#include <sstream>
#include <string>
#include "Player.h"
#include "Hand.h"
#include "Card.h"


void intInput()
{
	std::string tmp;
	int num = 0;
	std::cout << "Enter an integer: ";
	while (std::getline(std::cin, tmp))
	{
		std::stringstream ss(tmp);
		if (ss >> num)
		{
			if (ss.eof())
			{
				break;
			}
		}
		std::cout << "Error! Input an integer: ";
	}
	std::cout << "Your number is: " << num << std::endl;
}

std::ostream& endll(std::ostream& stream)
{
	std::cout << std::endl << std:: endl;
	stream.flush();
	return stream;
}
int main()
{

	intInput();
	std::cout << "aaa" << endll << "bbb";
}