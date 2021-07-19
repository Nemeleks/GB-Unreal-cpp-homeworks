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

	void giveCard(GenericPlayer& player);
	void dealCards();
	void shuffleDeck();
	void addNewDeck();
		
	void playerTurn(GenericPlayer& player);
	void scoring(std::vector<int>::iterator& maxScore);
	void resultRound(std::vector<int>& scores, std::vector<int>::iterator& maxScore);
	std::vector<int>::iterator searchMaxScore(std::vector<int>& scores);
	std::vector<Card*> generateDeck();

public:
	Game(std::vector<Player*>& players, House& dealer);
	void clearHands();
	void gameStart();
	void gameEnd();
	void gameStats() const;
	bool isBlackJack();
	
	size_t getDeckSize() const;
};