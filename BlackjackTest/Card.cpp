#include "Card.h"

Card::Card() :
	m_Rank(ace),
	m_Suit(clubs),
	m_IsFaceUp(true)

{
//	std::cout << "card create" << std::endl;
}

Card::Card(rank r, suit s):
	m_Rank(r),
	m_Suit(s),
	m_IsFaceUp(true)
{
//	std::cout << "card create" << std::endl;
}

Card::~Card()
{
//	std::cout << "card delete" << std::endl;
}

void Card::Flip()
{
	m_IsFaceUp = !(m_IsFaceUp);
}

int Card::getValue() const
{
	int value = 0;
	if (m_IsFaceUp)
	{
		value = static_cast<int>(m_Rank);
		if (value > 10)
		{
			value = 10;
		}
	}
	return value;
}


std::ostream& operator<<(std::ostream& out, Card& card)
{
	const std::string rank[] = { "0", "Ace", "2", "3", "4", "5", "6", "7", "8", "9","10", "Jack", "Queen", "King" };
	const std::string suit[] = { "hearts", "diamonds", "spades", "clubs" };

	if (!(card.m_IsFaceUp))
	{
		out << "XX" << std::endl;;
	}
	else
	{
		out << rank[static_cast<int>(card.m_Rank)] << " of " << suit[static_cast<int>(card.m_Suit)] << std::endl;
	}
	return out;
}
