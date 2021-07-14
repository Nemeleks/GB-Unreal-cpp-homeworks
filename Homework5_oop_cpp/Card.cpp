#include "Card.h"

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
	}
	return value;
}
