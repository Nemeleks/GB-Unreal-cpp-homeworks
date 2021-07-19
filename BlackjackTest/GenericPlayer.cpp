#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(std::string name) :
playerName(name),
wins(0),
loses(0),
pushes(0)
{}

GenericPlayer::~GenericPlayer()
{
}



bool GenericPlayer::isBusted() const
{
	return(getTotal() > 21);
}

void GenericPlayer::Bust() 
{
	if (isBusted())
	{
		std::cout << playerName << " has " << getTotal() << " and now was busted:(" << std::endl;
		loses++;
	}
}

std::string GenericPlayer::getName() const
{
	return playerName;
}

int GenericPlayer::getLoses() const
{
	return loses;
}

std::ostream& operator<<(std::ostream& out, const GenericPlayer& AGenericPlayer)
{
	out << std::endl;
	out << AGenericPlayer.playerName << " cards is:" << std::endl;
	std::vector<Card*>::const_iterator ciCard;
	if (!(AGenericPlayer.m_Cards.empty()))
	{
		out << AGenericPlayer.m_Cards;
		out <<AGenericPlayer.playerName<< " total score: " << AGenericPlayer.getTotal() << std::endl;
		out << std::endl;
	}
	else
	{
		out << "<EMPTY>" << std::endl;
	}
	return out;
}
