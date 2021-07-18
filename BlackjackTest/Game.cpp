#include "Game.h"

Game::Game(size_t numOfPlayers, std::vector<Player*> players, House& dealer) :
	m_numOfPlayers(numOfPlayers),
	m_players(players),
	m_deck(generateDeck()),
	m_dealer(dealer)
{
}

std::vector<Card*> Game::generateDeck()
{
	std::vector<Card*> deck;
	deck.reserve(52);
	Card* card = nullptr;
	rank ranks[] = { ace,two,three,four,five,six,seven,eight,nine,ten,jack,queen,king };
	suit suits[] = { hearts, diamonds, spades, clubs };

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 13; j++)
		{
			card = new Card(ranks[j], suits[i]);
			deck.push_back(card);
		}
	}

	std::random_device rd;
	std::mt19937_64 g(rd());
	std::shuffle(std::begin(deck), std::end(deck), g);
	return deck;
}

void Game::gameStart(std::vector<Player*> players, House& dealer)
{
	dealer.add(m_deck[0]);
	m_deck.erase(m_deck.begin());
	dealer.add(m_deck[0]);
	dealer.FlipFirstCard();
	std::cout << dealer;
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{

		m_deck.erase(m_deck.begin());
		players[i]->add(m_deck[0]);
		m_deck.erase(m_deck.begin());
		players[i]->add(m_deck[0]);
		m_deck.erase(m_deck.begin());
		std::cout << *players[i] << std::endl;
		while (players[i]->isHitting())
		{
			players[i]->add(m_deck[0]);
			m_deck.erase(m_deck.begin());
			if (players[i]->isBoosted())
			{
				std::cout << *players[i] << std::endl;
				players[i]->Lose();
				break;
			}
			std::cout << *players[i] << std::endl;
		}
		
	}
	dealer.FlipFirstCard();
	std::cout << dealer << std::endl;
	while (dealer.isHitting())
	{
		dealer.add(m_deck[0]);
		m_deck.erase(m_deck.begin());
		if (dealer.isBoosted())
		{
			std::cout << dealer << std::endl;
			dealer.Lose();
			break;
		}
		std::cout << dealer << std::endl;
	}
}

void Game::gameEnd(std::vector<Player*> players, House& dealer)
{
	std::vector<int*> scores;
	
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{		
		if (!players[i]->isBoosted())
		{	
			int* score = new int(players[i]->getTotal());
			std::cout << "player "<< players[i]->getName()<< " total: " << players[i]->getTotal() << std::endl;
			//*score = players[i]->getTotal();
			scores.push_back(score);
		}

	}
	
	if (!dealer.isBoosted())
	{
		std::cout <<"dealer total: " << dealer.getTotal() << std::endl;
		int dealerScore = dealer.getTotal();
		scores.push_back(&dealerScore);
	}
	std::vector<int*>::iterator a;
	for (size_t i = 0; i < scores.size(); i++)
	{
		std::cout << *scores[i] << std::endl;
	}
	a = std::max_element(std::begin(scores), std::end(scores));

	std::cout <<"max element is: " << *(*a) << std::endl;
	std::cout << "max element at: " << std::distance(scores.begin(), a) << '\n';
	std::vector<Player*> maxScorePlayers;
	std::vector<Player*> pushScorePlayers;
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{
		if (players[i]->getTotal() == *(*a) && dealer.getTotal() == players[i]->getTotal())
		{
			pushScorePlayers.push_back(players[i]);
		}
		if (players[i]->getTotal() == *(*a))
		{
			maxScorePlayers.push_back(players[i]);
		}

		else if (dealer.getTotal() == *(*a))
		{
			dealer.Win();
			return;
		}
	}
	if (pushScorePlayers.size() > 0)
	{
		for (size_t i = 0; i < pushScorePlayers.size(); i++)
		{
			pushScorePlayers[i]->Push();
		}
		dealer.Push();
	}
	if (maxScorePlayers.size() > 1)
	{
		for (size_t i = 0; i < maxScorePlayers.size(); i++)
		{
			maxScorePlayers[i]->Push();
		}
		return;
	}
	else
	{
		maxScorePlayers[0]->Win();
	}

}


