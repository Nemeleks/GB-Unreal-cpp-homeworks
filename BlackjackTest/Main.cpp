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
	Game game(numP, pNames, dealer);
	game.gameStart(pNames, dealer);
	game.gameEnd(pNames, dealer);


	/*Player Mark("Mark");
	std::vector<Card*> deck;
	deck.reserve(52);
	Card* card = nullptr;
	rank ranks[] = { ace,two,three,four,five,six,seven,eight,nine,ten,jack,queen,king };
	suit suits[] = { hearts, diamonds, spades, clubs };
	
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 13 ; j++)
		{
			card = new Card(ranks[j], suits[i]);
			deck.push_back(card);
		}		
	}

	std::random_device rd;
	std::mt19937_64 g(rd());
	std::shuffle(std::begin(deck), std::end(deck), g);

	Mark.add(deck[0]);
	deck.erase(deck.begin());
	Mark.add(deck[0]);
	deck.erase(deck.begin());
	std::cout << Mark << std::endl;
	
			

		while (Mark.isHitting())
		{
			Mark.add(deck[0]);
			deck.erase(deck.begin());
			if (Mark.isBoosted())
			{
				std::cout << Mark << std::endl;
				Mark.Lose();
				break;
			}
			std::cout << Mark << std::endl;
		}*/

		
} 