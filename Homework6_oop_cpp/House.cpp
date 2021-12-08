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
		m_Cards[0]->Flip();
	}
	else
	{
		std::cout << "no cards to flip" << std::endl;
	}
}
