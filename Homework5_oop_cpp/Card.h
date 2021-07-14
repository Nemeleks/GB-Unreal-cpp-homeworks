#pragma once
enum class rank
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
	jack = 10,
	queen = 10,
	king = 10
};

enum class suit
{
	hearts,
	diamonds,
	spades,
	clubs
};
class Card
{
private:
	rank m_Rank;
	suit m_Suit;
	bool m_IsFaceUp;
public:
	void Flip();
	int getValue() const;
};

