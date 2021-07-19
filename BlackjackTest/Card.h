#pragma once
#include <iostream>
enum rank
{
	ace = 1,
	two = 2,
	three = 3,
	four = 4,
	five = 5,
	six = 6,
	seven = 7,
	eight = 8,
	nine = 9,
	ten = 10,
	jack = 11,
	queen = 12,
	king = 13
};

enum suit
{
	hearts,
	diamonds,
	spades,
	clubs
};
class Card
{
protected:
	rank m_Rank;
	suit m_Suit;
	bool m_IsFaceUp;
public:
	Card();
	Card(rank r, suit s);
	~Card();
	void Flip();
	int getValue() const;
	friend std::ostream& operator<<(std::ostream& out, Card& card);
	int getRank() const;
	int getSuit() const;
	bool getFaceUp() const;
};