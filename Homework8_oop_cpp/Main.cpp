#include <iostream>
#include <sstream>
#include <assert.h>
#include "Bar.h"
#include "robot.h"

template<typename T>
T Div(const T& numenator,const T& denomenator)
{
	if (denomenator == 0)
	{
		throw "Division by zero error";
	}
	return (numenator / denomenator);
}

int main()
{
	try
	{	
		std::cout <<"6/2=" << Div(6, 2) << std::endl;
		std::cout <<"6/0=" << Div(6, 0) << std::endl;
	}
	catch (const char* ex)
	{
		std::cerr << ex << std::endl;
	}

	Bar b;
	int n = 0;
	std::string tmp;

	try
	{
		do
		{
			std::cout << "Enter int: ";
			while (std::getline(std::cin, tmp))
			{
				
				std::stringstream ss(tmp);
				if (ss >> n)
				{
					if (ss.eof())
					{
						break;
					}
				}
				std::cout << "Enter int: ";
			}
			if (n != 0)
			{
				b.setY(n);
				std::cout << "y = " << b.getY() << std::endl;
			}

		} while (n != 0);

	}
	catch (Ex a)
	{
		std::cerr <<"y + a > 100, y = "<<b.getY()<<", a = " << n <<", and a*y= "<<a.getX() << std::endl;
	}
	system("pause");
	system("cls");
	robot r;
	r.playRobot();

}