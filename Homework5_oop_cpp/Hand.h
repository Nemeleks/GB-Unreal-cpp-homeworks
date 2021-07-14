#pragma once
#include "Card.h"
#include <vector>
class Hand 
{
protected:
	std::vector<Card*> m_Cards;
public:
	Hand();
	virtual ~Hand();
	void add(Card* card);
	void clear();
	int getTotal() const;
};

