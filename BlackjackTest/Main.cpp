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

	std::string tmp;

	std::cout << "Enter number of players(1-6): ";
	while (std::getline(std::cin, tmp))
	{
		std::stringstream ss(tmp);
		if (ss >> numP)
		{
			if (numP > 0 && numP < 7)
			{
				if (ss.eof())
				{
					break;
				}
			}

		}
		std::cout << "Enter number of players(1-6): ";
	}

	std::vector<Player*> pNames;
	Player* pName = nullptr;
	House dealer;
	std::string name;
	std::vector<std::string> names;
	
	for (size_t i = 0; i < numP; i++)
	{
		bool uniqueName = false;
		std::cout << "Enter Player " << i + 1 << " name: ";
		
	
		do
		{
			int a = 0;
			std::getline(std::cin, name);
			if (name.size()>0)
			{
				while (name[0] == ' ')
				{
					name.erase(0);
				}
			}
			if (i == 0)
			{

				if (!name.empty())
				{
					names.push_back(name);
					uniqueName = true;
				}
				else
				{
					//std::cout << "Name '" << name << "' already used. Try again." << std::endl;
					std::cout << "Enter Player " << i + 1 << " name: ";
				}

			}
			else
			{
				if (std::find(names.begin(), names.end(), name) != names.end())
				{
					a++;
				}
				if (a == 0)
				{
					if (!name.empty())
					{
						names.push_back(name);
						uniqueName = true;
					}
					else
					{
						//std::cout << "Name '" << name << "' already used. Try again." << std::endl;
						std::cout << "Enter Player " << i + 1 << " name: ";
					}
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
	std::string answer = "y";
	do
	{		
		game.gameStart();
		game.gameEnd();		
		game.clearHands();

		do
		{
			std::cout << "Play again ? y/n: ";
			std::getline(std::cin, answer);
		} while (answer != "y" && answer != "n");

	} while (answer == "y");
	game.gameStats();

	return 0;
} 