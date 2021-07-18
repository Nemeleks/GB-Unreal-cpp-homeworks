#include "Game.h"

void Game::giveCard(GenericPlayer& player)
{
	player.add(*(m_deck.end()-1));
	m_deck.pop_back();
}

void Game::dealCards()
{
	giveCard(m_dealer);
	giveCard(m_dealer);	
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{
		giveCard(*m_players[i]);
		giveCard(*m_players[i]);		
	}
}

void Game::shuffleDeck()
{
	std::random_device rd;
	std::mt19937_64 g(rd());
	std::shuffle(std::begin(m_deck), std::end(m_deck), g);
}

void Game::addNewDeck()
{
	if (m_deck.size() > 16)
	{
		return;
	}

	std::vector<Card*> tmp;
	tmp = generateDeck();
	m_deck.insert(m_deck.end(), tmp.begin(), tmp.end());
	shuffleDeck();
}

void Game::playerTurn(GenericPlayer& player)
{
	addNewDeck();
	std::cout << player << std::endl;
	while (player.isHitting())
	{
		giveCard(player);
		if (player.isBoosted())
		{
			std::cout << player << std::endl;
			player.Lose();
			break;
		}
		std::cout << player << std::endl;
	}
}

void Game::scoreCount()
{
	std::vector<GenericPlayer*> maxScorePlayers;
	for (size_t i = 0; i < length; i++)
	{

	}
}

Game::Game(std::vector<Player*>& players, House& dealer) :
	m_numOfPlayers(players.size()),
	m_players(players),
	m_deck(generateDeck()),
	m_dealer(dealer)
{
	shuffleDeck();
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

	return deck;
}

void Game::gameStart()
{
	std::cout << "cards in deck: " << m_deck.size() << std::endl;
	dealCards();
	m_dealer.FlipFirstCard();
	std::cout << m_dealer;
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{
		playerTurn(*m_players[i]);
	}
	m_dealer.FlipFirstCard();
	playerTurn(m_dealer);
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
		//for (size_t i = 0; i < scores.size(); i++)
		//{
		//	std::cout << scores[i] << std::endl;
		//}
		a = std::max_element(std::begin(scores), std::end(scores));

		//std::cout << "max element is: " << *a << std::endl;
		//std::cout << "max element at: " << std::distance(scores.begin(), a) << '\n';
		//std::vector<Player*> maxScorePlayers;
		//std::vector<Player*> pushScorePlayers;
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
		std::cout << "all players are busted" << std::endl;
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


