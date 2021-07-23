#include "House.h"

House::House(const std::string& name) :
	GenericPlayer(name)
{
}

House::~House()
{
}

bool House::isHitting() const
{
	if (getTotal() <= 16)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void House::FlipFirstCard()
{
	if (!m_Cards.empty())
	{
		m_Cards[1]->Flip();
	}
	else
	{
		std::cout << "no cards to flip" << std::endl;
	}
}

void House::Win() 
{
	std::cout << "House is Win!" << std::endl;
	wins++;
}

void House::Lose() const
{
	std::cout << "House is Lose :(" << std::endl;
}

void House::Push() 
{
	std::cout << "House is Push." << std::endl;
	pushes++;
}

int House::getWins() const
{
	return wins;
}

int House::getPushes() const
{
	return pushes;
}