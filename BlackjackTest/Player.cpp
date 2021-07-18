#include "Player.h"

Player::Player(const std::string& name):
	GenericPlayer(name)
{
}

Player::~Player()
{
}

bool Player::isHitting() const
{
	char answer;
	do
	{
		std::cout << "Do you need one more card? y/n" << std::endl;
		std::cin >> answer;
	} while (answer != 'y' && answer != 'n');
	if (answer == 'y')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Player::Win() const
{
	std::cout << playerName << " is Win! Cograts!" << std::endl;
}

void Player::Lose() const
{
	std::cout << playerName << " is Lose :(" << std::endl;
}

void Player::Push() const
{
	std::cout << playerName << " is Push." << std::endl;
}
