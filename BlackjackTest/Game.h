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
	std::vector<Player*>& m_players;
	House& m_dealer;
	std::vector<Card*> m_deck;

public:
	Game(std::vector<Player*>& players, House& dealer);
	std::vector<Card*> generateDeck();
	void gameStart();
	void gameEnd();
	void clearHands();
	int getDeckSize() const;
};

