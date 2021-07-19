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
		if (player.isBusted())
		{
			std::cout << player << std::endl;
			player.Bust();
			break;
		}
		std::cout << player << std::endl;
	}
}

void Game::scoring(std::vector<int>::iterator& maxScore)
{
	std::vector<GenericPlayer*> maxScorePlayers;
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{
		if (m_players[i]->getTotal() == *maxScore)
		{
			maxScorePlayers.push_back(m_players[i]);
		}
	}
	if (m_dealer.getTotal() == *maxScore)
	{
		maxScorePlayers.push_back(&m_dealer);
	}
	if (maxScorePlayers.size() > 1)
	{
		for (size_t i = 0; i < maxScorePlayers.size(); i++)
		{
			maxScorePlayers[i]->Push();
		}
	}
	else
	{
		maxScorePlayers[0]->Win();
	}
}

void Game::resultRound(std::vector<int>& scores, std::vector<int>::iterator& maxScore)
{
	if (scores.size() > 0)
	{
		scoring(maxScore);
	}
	else
	{
		std::cout << "All players was busted. No Winner :(" << std::endl;
	}
}

std::vector<int>::iterator Game::searchMaxScore(std::vector<int>& scores)
{

	for (size_t i = 0; i < m_numOfPlayers; i++)
	{
		if (!m_players[i]->isBusted())
		{
			int score = m_players[i]->getTotal();
			std::cout << "Player " << m_players[i]->getName() << " total score: " << m_players[i]->getTotal() << std::endl;
			scores.push_back(score);
		}

	}

	if (!m_dealer.isBusted())
	{
		std::cout << "House total score: " << m_dealer.getTotal() << std::endl;
		int dealerScore = m_dealer.getTotal();
		scores.push_back(dealerScore);
	}
	std::vector<int>::iterator a;

		a = std::max_element(std::begin(scores), std::end(scores));
		return a;
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
	auto maxScore = searchMaxScore(scores);
	resultRound(scores, maxScore);

}

void Game::gameStats() const
{
	std::cout << std::endl;
	std::cout << "Game stats :" << std::endl;
	std::cout << std::endl;
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{
		std::cout << m_players[i]->getName() << " : " << std::endl;
		std::cout << "Wins: " << m_players[i]->getWins() << std::endl;
		std::cout << "Loses: " << m_players[i]->getLoses() << std::endl;
		std::cout << "Pushes: " << m_players[i]->getPushes() << std::endl;
		std::cout << std::endl;
	}

	std::cout << m_dealer.getName() << " : " << std::endl;
	std::cout << "Wins: " << m_dealer.getWins() << std::endl;
	std::cout << "Loses: " << m_dealer.getLoses() << std::endl;
	std::cout << "Pushes: " << m_dealer.getPushes() << std::endl;
	std::cout << std::endl;
}

void Game::clearHands()
{
	for (size_t i = 0; i < m_numOfPlayers; i++)
	{
		m_players[i]->clear();
	}
	m_dealer.clear();
}

size_t Game::getDeckSize() const
{
	return m_deck.size();
}


