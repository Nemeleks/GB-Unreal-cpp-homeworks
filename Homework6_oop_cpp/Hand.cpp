#include "Hand.h"

Hand::Hand()
{
	m_Cards.reserve(7);
}

Hand::~Hand()
{
	clear();
}

void Hand::add(Card* card)
{
	m_Cards.push_back(card);
}

void Hand::clear()
{
	std::vector<Card*>::iterator it = m_Cards.begin();
	for (it=m_Cards.begin(); it != m_Cards.end(); it++)
	{
		delete* it;
		*it = 0;
	}
	m_Cards.clear();
}

int Hand::getTotal() const
{
	if (m_Cards.empty())
	{
		return 0;
	}

	if (m_Cards[0]->getValue() == 0)
	{
		return 0;
	}

	int total = 0;
	std::vector<Card*>::const_iterator it;
	for (it = m_Cards.begin(); it != m_Cards.end(); it++)
	{
		total += (*it)->getValue();
	}
	bool containAce = false;
	for (it = m_Cards.begin(); it != m_Cards.end(); it++)
	{
		if ((*it)->getValue() == static_cast<int>(rank::ace))
		{
			containAce = true;
		}
	}
	if (containAce && total <= 11)
	{
		total += 10;
	}

	return total;
}
