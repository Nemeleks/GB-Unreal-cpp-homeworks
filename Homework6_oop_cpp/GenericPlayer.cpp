#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(std::string name) :
playerName(name)
{}

GenericPlayer::~GenericPlayer()
{
}



bool GenericPlayer::isBoosted() const
{
	if (getTotal() > 21)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void GenericPlayer::Bust() const
{
	if (isBoosted())
	{
		std::cout << playerName << "has " << getTotal() << "and now boosted" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const GenericPlayer& AGenericPlayer)
{
	out << AGenericPlayer.playerName << " cards is:" << std::endl;
	std::vector<Card*>::const_iterator ciCard;
	if (!(AGenericPlayer.m_Cards.empty()))
	{
		for (ciCard = AGenericPlayer.m_Cards.begin(); ciCard != AGenericPlayer.m_Cards.end(); ciCard++)
		{
			out << *(*ciCard);
		}
		out << "Total score: " << AGenericPlayer.getTotal() << std::endl;
	}
	else
	{
		out << "<EMPTY>" << std::endl;
	}
	return out;
}
