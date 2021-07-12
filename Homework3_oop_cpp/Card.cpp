#include "Card.h"

Card::Card(CardSuit _suit, CardDignity _dignity, bool _openCard):
	suit(_suit),
	dignity(_dignity),
	openCard(_openCard)
{
}

void Card::flip()
{
	if (openCard)
	{
		openCard = false;
	}
	else
	{
		openCard = true;
	}
}

int Card::GetValue() const
{
	return static_cast<int>(dignity);
}
