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
	std::cout << "|---------------------------------------------------------------------------------|" << std::endl;
	std::cout << "|--@@@@@@--@@---------@@-----@@@@@@--@@--@----------@@-----@@-----@@@@@@--@@--@---|" << std::endl;
	std::cout << "|--@@--@@--@@---------@@-----@@------@@-@-----------@@-----@@-----@@------@@-@----|" << std::endl;
	std::cout << "|--@@@@@@--@@-------@----@---@@------@@@------------@@---@----@---@@------@@@-----|" << std::endl;
	std::cout << "|--@@@@@---@@-------@@@@@@---@@------@@@@-----------@@---@@@@@@---@@------@@@@----|" << std::endl;
	std::cout << "|--@@--@@--@@------@@----@@--@@------@@--@------@@--@@--@@----@@--@@------@@--@---|" << std::endl;
	std::cout << "|--@@@@@@--@@@@@@--@@----@@--@@@@@@--@@---@-----@@@@@@--@@----@@--@@@@@@--@@---@--|" << std::endl;
	std::cout << "|---------------------------------------------------------------------------------|" << std::endl;
	std::cout << std::endl << std::endl;
	int numP = 0;

	do {
		std::cout << "Enter number of players(1-6): ";

		if (!(std::cin >> numP && std::cin.good())) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

	} while (!(numP > 0 && numP < 7));

	std::vector<Player*> pNames;
	Player* pName = nullptr;
	House dealer;
	std::string name;
	std::vector<std::string> names;
	
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for (size_t i = 0; i < numP; i++)
	{
		bool uniqueName = false;
		std::cout << "Enter Player " << i + 1 << " name: ";
		
	
		do
		{
			int a = 0;
			std::getline(std::cin, name);
			if (i == 0)
			{
				names.push_back(name);
				uniqueName = true;
			}
			else
			{
				if (std::find(names.begin(), names.end(), name) != names.end())
				{
					a++;
				}
				if (a == 0)
				{
					names.push_back(name);
					uniqueName = true;
				}
				else
				{
					std::cout << "Name '" << name << "' already used. Try again." << std::endl;
					std::cout << "Enter Player " << i + 1 << " name: ";
				}
			}
		}while (!uniqueName);
	}

	for (size_t i = 0; i < numP; i++)
	{
		pName = new Player(names[i]);
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