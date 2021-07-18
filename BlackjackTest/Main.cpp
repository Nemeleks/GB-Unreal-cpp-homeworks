#include <iostream>
#include <sstream>
#include <string>
#include "Player.h"
#include "Hand.h"
#include "Card.h"
#include <algorithm>
#include <random>
#include "Game.h"


int main()
{
	size_t numP = 0;
	size_t temp = 0;
	do
	{
		std::cout << "Please enter number of players(1 - 6): ";
		std::cin >> numP;
	} while (!(0 < numP && numP < 7));



	std::vector<Player*> pNames;
	Player* pName = nullptr;
	House dealer;
	std::string name;
	for (size_t i = 0; i < numP; i++)
	{
		std::cout << "enter Player " << i + 1 << " name: ";
		std::cin >> name;
		pName = new Player(name);
		pNames.push_back(pName);
	}
	Game game(pNames, dealer);
	char answer = 'y';
	do
	{		
		game.gameStart();
		game.gameEnd();
		game.clearHands();
		std::cout << "cards in deck: " << game.getDeckSize() << std::endl;
		std::cout << "play again ? y/n: ";
		std::cin >> answer;
	} while (answer == 'y');

		
} 