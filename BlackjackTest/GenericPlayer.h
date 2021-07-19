#pragma once
#include "Hand.h"
#include <iostream>
class GenericPlayer :
    public Hand
{
protected:
    std::string playerName;
    int wins;
    int busteds;
    int pushes;
public:
    GenericPlayer(std::string name);
    virtual ~GenericPlayer();

    bool isBusted() const;
    void Bust();
    std::string getName() const;
    int getBusteds() const;
    std::vector<Card*> getHand() const;

    virtual bool isHitting() const = 0;
    virtual void Win() = 0;
    virtual void Lose() const = 0;
    virtual void Push() = 0;

    friend std::ostream& operator<<(std::ostream& out, const GenericPlayer& AGenericPlayer);
};

