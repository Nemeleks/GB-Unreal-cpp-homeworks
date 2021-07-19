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
	std::string answer;
	do
	{
		std::cout << "Do you need one more card? y/n" << std::endl;
		std::getline(std::cin, answer);
	} while (answer != "y" && answer != "n");
	if (answer == "y")
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Player::Win() 
{
	std::cout << playerName << " is Win! Cograts!" << std::endl;
	wins++;
}

void Player::Lose() const
{
	std::cout << playerName << " is Lose :(" << std::endl;
}

void Player::Push() 
{
	std::cout << playerName << " is Push." << std::endl;
	pushes++;
}

int Player::getWins() const
{
	return wins;
}

int Player::getPushes() const
{
	return pushes;
}
