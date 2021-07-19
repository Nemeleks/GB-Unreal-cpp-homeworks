#pragma once
#include "Card.h"
#include <vector>
#include <iomanip>
class Hand 
{
protected:
	std::vector<Card*> m_Cards;
public:
	Hand();
	virtual ~Hand();
	void add(Card* card);
	void clear();
	int getTotal() const;
	static std::string createLine(int lineNum, const Card& card, bool FaceUp);
	static int getCardRankLenght(const Card& card);
};
std::ostream& operator<<(std::ostream& out, const std::vector<Card*>& Cards);