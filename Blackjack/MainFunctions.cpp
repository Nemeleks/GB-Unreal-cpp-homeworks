#include "MainFunctions.h"

void printHead()
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
}

void getNumPlayers(int& numP)
{
//	int numP = 0;
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

}

void getPlayerNames(std::vector<Player*>& pNames,const int& numP)
{
	Player* pName = nullptr;
	std::string name;
	std::vector<std::string> names;

	for (size_t i = 0; i < numP; i++)
	{
		bool uniqueName = false;
		std::cout << "Enter Player " << i + 1 << " name: ";

		do
		{
			size_t duplicateNameCounter = 0;

			std::getline(std::cin, name);

			if (name[0] == ' ')
			{
				name.erase(0);
			}

			if (std::find(names.begin(), names.end(), name) != names.end())
			{
				duplicateNameCounter++;
			}

			if (duplicateNameCounter == 0)
			{
				if (!name.empty())
				{
					names.push_back(name);
					uniqueName = true;
				}
				else
				{
					std::cout << "Enter Player " << i + 1 << " name: ";
				}
			}

			else
			{
				std::cout << "Name '" << name << "' already used. Try again." << std::endl;
				std::cout << "Enter Player " << i + 1 << " name: ";
			}
		} while (!uniqueName);
	}

	for (size_t i = 0; i < numP; i++)
	{
		pName = new Player(names[i]);
		pNames.push_back(pName);
	}
}
