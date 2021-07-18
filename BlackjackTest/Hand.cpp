#include "Hand.h"

Hand::Hand()
{
//	std::cout << "Create hand" << std::endl;
	m_Cards.reserve(7);
}

Hand::~Hand()
{
//	std::cout << "delete Hand" << std::endl;
	clear();
}

void Hand::add(Card* card)
{
	m_Cards.push_back(card);
}

void Hand::clear()
{
	std::vector<Card*>::iterator it = m_Cards.begin();
	for (it=m_Cards.begin(); it != m_Cards.end(); ++it)
	{
		delete *it;
		*it = nullptr;
	}
	m_Cards.clear();
}

int Hand::getTotal() const
{
	if (m_Cards.empty())
	{
		return 0;
	}

	if (m_Cards[0]->getValue() == 0)
	{
		return 0;
	}

	int total = 0;
	std::vector<Card*>::const_iterator it;
	for (it = m_Cards.begin(); it != m_Cards.end(); it++)
	{
		total += (*it)->getValue();
	}
	bool containAce = false;
	for (it = m_Cards.begin(); it != m_Cards.end(); it++)
	{
		if ((*it)->getValue() == static_cast<int>(rank::ace))
		{
			containAce = true;
		}
	}
	if (containAce && total <= 11)
	{
		total += 10;
	}

	return total;
}

std::string Hand::createLine(int lineNum, const Card& card, bool FaceUp )
{
	const std::string rank[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
	const std::string suit[] = { "\003", "\004", "\006", "\005" };
	if (FaceUp)
	{
		switch (lineNum)
		{
		case(0):
			return "*******";
			break;

		case(1):
			return rank[card.getRank()];
			break;
		case(2):
			return "*     *";
			break;
		case(3):
			return suit[card.getSuit()];
			break;

		case(4):
			return "*******";
			break;

		default:
			break;
		}
	}
	else
	{
		switch (lineNum)
		{
		case(0):
			return "*******";
			break;

		case(1):
			return "*******";
			break;
		case(2):
			return "*******";
			break;
		case(3):
			return "*******";
			break;

		case(4):
			return "*******";
			break;

		default:
			break;
		}
	}
	
}

int Hand::getCardRankLenght(const Card& card)
{
	const std::string rank[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
	return rank[card.getRank()].size();
}

std::ostream& operator<<(std::ostream& out, const std::vector<Card*>& Cards)
{

	for (size_t i = 0; i < 5; i++)
	{

		for (size_t j = 0; j < Cards.size(); j++)
		{
			if (Cards[j]->getFaceUp())
			{
				if (i == 1 || i == 3)
				{
					out << "*" << std::setw(3) << std::setfill(' ') << Hand::createLine(i, *Cards[j], Cards[j]->getFaceUp()) << std::setw(3) << std::setfill(' ') << "*" << " ";
				}

				else
				{
					out << Hand::createLine(i, *Cards[j], Cards[j]->getFaceUp()) << " ";
				}
			}
			else
			{
				out << Hand::createLine(i, *Cards[j], Cards[j]->getFaceUp()) << " ";
			}
		}
		out << std::endl;
	}
	return out;
}
