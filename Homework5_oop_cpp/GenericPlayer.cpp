#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(std::string name) :
playerName(name)
{}

bool GenericPlayer::isHitting()
{
	char answer;
	do
	{
		std::cout << "do you need one more card ?";
		std::cin >> answer;
	} while (answer == 'y' || answer == 'n');
	if (answer == 'y')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool GenericPlayer::isBoosted()
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
	if (isBoosted)
	{
		std::cout << playerName << "has " << getTotal() << "and now boosted" << std::endl;
	}
}
