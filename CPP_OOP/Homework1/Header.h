#pragma once
#include <math.h>
#include <cstdint>


// ------------------------------- 1.1 START ------------------------------------
class Power {
private:
	double num1;
	double num2;

public:
	Power() :
		num1(2),
		num2(3)
	{}

	Power(double n1, double n2) :
		num1(n1),
		num2(n2)
	{}

	~Power()
	{
	}

	void set(double n1, double n2)
	{
		num1 = n1;
		num2 = n2;
	}

	double getNum1()
	{
		return num1;
	}

	double getNum2()
	{
		return num2;
	}

	double calculate()
	{
		return pow(num1, num2);
	}
};

// ------------------------------- 1.1 END ------------------------------------

// ------------------------------- 1.2 START ------------------------------------

class RGBA
{
private:
	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;
public:
	RGBA() :
		m_red(0),
		m_green(0),
		m_blue(0),
		m_alpha(255)
	{}

	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) :
		m_red(red),
		m_green(green),
		m_blue(blue),
		m_alpha(alpha)
	{}

	~RGBA() {};

	void print()
	{
		std::cout << "Red = " << static_cast<int>(m_red) << " Green = " << static_cast<int>(m_green) << " Blue = " << static_cast<int>(m_blue) << " Alpha = " << static_cast<int>(m_alpha) << std::endl; // static cast for correct cout
	}

};

// ------------------------------- 1.2 START ------------------------------------