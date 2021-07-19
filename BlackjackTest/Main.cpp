#include <iostream>
#include <sstream>
#include <string>
#include "Player.h"
#include "Hand.h"
#include "Card.h"
#include <algorithm>
#include <random>
#include "Game.h"
#include <limits>


int main()
{
	int numP = 0;

	do {
		std::cout << "Enter number of players(1-6): ";

		if (!(std::cin >> numP)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}

	} while (!(numP > 0 && numP < 7));

	std::vector<Player*> pNames;
	Player* pName = nullptr;
	House dealer;
	std::string name;
	for (size_t i = 0; i < numP; i++)
	{
		std::cout << "Enter Player " << i + 1 << " name: ";
		std::getline(std::cin, name);
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

		do
		{
			std::cout << "Play again ? y/n: ";
			std::cin >> answer;
		} while (answer != 'y' && answer != 'n');

	} while (answer == 'y');
	game.gameStats();

	return 0;
} 