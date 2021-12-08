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
	~Game()
	{
		std::vector<Card*>::iterator it = m_deck.begin();
		for (it = m_deck.begin(); it != m_deck.end(); ++it)
		{
			delete* it;
			*it = nullptr;
		}
		std::vector<Player*>::iterator iter = m_players.begin();
		for (iter = m_players.begin(); iter != m_players.end(); ++iter)
		{
			delete* iter;
			*iter = nullptr;
		}
	}
	Game(std::vector<Player*>& players, House& dealer);
	void clearHands();
	void gameStart();
	void gameEnd();
	void gameStats() const;
	bool isBlackJack();
	
	size_t getDeckSize() const;
};