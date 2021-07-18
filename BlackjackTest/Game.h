#pragma once
#include <iostream>
#include <vector>
#include "Player.h"
#include "House.h"
#include <algorithm>
#include <random>
class Game
{
private:
	size_t m_numOfPlayers;
	std::vector<Player*> m_players;
	House& m_dealer;
	std::vector<Card*> m_deck;

public:
	Game(size_t numOfPlayers, std::vector<Player*> players, House& dealer);
	std::vector<Card*> generateDeck();
	void gameStart(std::vector<Player*> players, House& dealer);
	void gameEnd(std::vector<Player*> players, House& dealer);
	void clearHands(std::vector<Player*> players, House& dealer);
	int getDeckSize() const;
};

