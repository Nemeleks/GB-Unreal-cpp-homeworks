#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(std::string name) :
playerName(name)
{}

GenericPlayer::~GenericPlayer()
{
}



bool GenericPlayer::isBoosted() const
{
	return(getTotal() > 21);
}

void GenericPlayer::Bust() const
{
	if (isBoosted())
	{
		std::cout << playerName << " has " << getTotal() << " and now was busted:(" << std::endl;
	}
}

std::string GenericPlayer::getName() const
{
	return playerName;
}

std::ostream& operator<<(std::ostream& out, const GenericPlayer& AGenericPlayer)
{
	out << std::endl;
	out << AGenericPlayer.playerName << " cards is:" << std::endl;
	std::vector<Card*>::const_iterator ciCard;
	if (!(AGenericPlayer.m_Cards.empty()))
	{
		out << AGenericPlayer.m_Cards << std::endl;
		out <<AGenericPlayer.playerName<< " total score: " << AGenericPlayer.getTotal() << std::endl;
	}
	else
	{
		out << "<EMPTY>" << std::endl;
	}
	return out;
}
