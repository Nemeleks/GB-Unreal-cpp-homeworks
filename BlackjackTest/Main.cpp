
#include "Player.h"
#include "Hand.h"
#include "Card.h"
#include "Game.h"
#include "MainFunctions.h"

int main()
{		
	int numP = 0;
	std::vector<Player*> pNames;

	printHead();
	getNumPlayers(numP);
	getPlayerNames(pNames, numP);
	
	House dealer;
	Game game(pNames, dealer);
	std::string answer;
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