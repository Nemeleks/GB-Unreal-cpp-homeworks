#pragma once
#include "Hand.h"
#include <iostream>
class GenericPlayer :
    public Hand
{
protected:
    std::string playerName;
public:
    GenericPlayer(std::string name);
    virtual ~GenericPlayer();
    virtual bool isHitting() const = 0;
    bool isBoosted() const;
    void Bust() const;
    std::string getName() const;
    virtual void Win() const = 0;
    virtual void Lose() const = 0;
    virtual void Push() const = 0;

    friend std::ostream& operator<<(std::ostream& out, const GenericPlayer& AGenericPlayer);
};

