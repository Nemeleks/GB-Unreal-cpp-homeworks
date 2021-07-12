#pragma once
enum class CardSuit
{
	Hearts,
	Diamonds,
	Clubs,
	Spades
};
enum class CardDignity
{
	Threee = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Nine = 9,
	Ten = 10,
	Jack = 10,
	Queen = 10,
	King = 10,
	Ace = 1
};
class Card
{
private:
	CardSuit suit;
	CardDignity dignity;
	bool openCard;
public:
	Card(CardSuit _suit, CardDignity _dignity, bool _openCard);
	void flip();
	int GetValue() const;

};

