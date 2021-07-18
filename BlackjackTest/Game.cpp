#include "Game.h"

Game::Game(std::vector<Player*>& players, House& dealer) :
	m_numOfPlayers(players.size()),
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

void Game::gameStart()
{
	std::cout << "cards in deck: " << m_deck.size() << std::endl;
	if (m_deck.size() < 30)
	{
		std::vector<Card*> tmp;
		tmp = generateDeck();
		for (size_t i = 0; i < tmp.size(); i++)
		{
			m_deck.push_back(tmp[i]);
		}
	}
	m_dealer.add(m_deck[0]);
	m_deck.erase(m_deck.begin());
	m_dealer.add(m_deck[0]);
	m_dealer.FlipFirstCard();
	std::cout << m_dealer;
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{

		m_deck.erase(m_deck.begin());
		m_players[i]->add(m_deck[0]);
		m_deck.erase(m_deck.begin());
		m_players[i]->add(m_deck[0]);
		m_deck.erase(m_deck.begin());
		std::cout << *m_players[i] << std::endl;
		while (m_players[i]->isHitting())
		{
			m_players[i]->add(m_deck[0]);
			m_deck.erase(m_deck.begin());
			if (m_players[i]->isBoosted())
			{
				std::cout << *m_players[i] << std::endl;
				m_players[i]->Lose();
				break;
			}
			std::cout << *m_players[i] << std::endl;
		}
		
	}
	m_dealer.FlipFirstCard();
	std::cout << m_dealer << std::endl;
	while (m_dealer.isHitting())
	{
		m_dealer.add(m_deck[0]);
		m_deck.erase(m_deck.begin());
		if (m_dealer.isBoosted())
		{
			std::cout << m_dealer << std::endl;
			m_dealer.Lose();
			break;
		}
		std::cout << m_dealer << std::endl;
	}
}

void Game::gameEnd()
{
	
	std::vector<int> scores;
	
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{		
		if (!m_players[i]->isBoosted())
		{	
			int score = m_players[i]->getTotal();
			std::cout << "player "<< m_players[i]->getName()<< " total: " << m_players[i]->getTotal() << std::endl;
			scores.push_back(score);
		}

	}
	
	if (!m_dealer.isBoosted())
	{
		std::cout <<"dealer total: " << m_dealer.getTotal() << std::endl;
		int dealerScore = m_dealer.getTotal();
		scores.push_back(dealerScore);
	}
	std::vector<int>::iterator a;
	if (scores.size() > 0)
	{
		for (size_t i = 0; i < scores.size(); i++)
		{
			std::cout << scores[i] << std::endl;
		}
		a = std::max_element(std::begin(scores), std::end(scores));

		std::cout << "max element is: " << *a << std::endl;
		std::cout << "max element at: " << std::distance(scores.begin(), a) << '\n';
		std::vector<Player*> maxScorePlayers;
		std::vector<Player*> pushScorePlayers;
		for (size_t i = 0; i < m_numOfPlayers; i++)
		{
			if (m_players[i]->getTotal() == *a && m_dealer.getTotal() == m_players[i]->getTotal())
			{
				pushScorePlayers.push_back(m_players[i]);
			}
			if (pushScorePlayers.size() > 0)
			{
				for (size_t i = 0; i < pushScorePlayers.size(); i++)
				{
					pushScorePlayers[i]->Push();
				}
				m_dealer.Push();
				return;
			}
			if (m_players[i]->getTotal() == *a)
			{
				maxScorePlayers.push_back(m_players[i]);
			}

			else if (m_dealer.getTotal() == *a)
			{
				m_dealer.Win();
				return;
			}
		}
		if (pushScorePlayers.size() > 0)
		{
			for (size_t i = 0; i < pushScorePlayers.size(); i++)
			{
				pushScorePlayers[i]->Push();
			}
			m_dealer.Push();
		}
		else if (maxScorePlayers.size() > 1)
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
	else
	{
		std::cout << "all players boosted" << std::endl;
	}

}

void Game::clearHands()
{
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{
		m_players[i]->clear();
	}
	m_dealer.clear();
}

int Game::getDeckSize() const
{
	return m_deck.size();
}


