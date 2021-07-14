#pragma once
#include "Hand.h"
#include <iostream>
class GenericPlayer :
    public Hand
{
private:
    std::string playerName;
public:
    GenericPlayer(std::string name);
    virtual bool isHitting();
    bool isBoosted();
    void Bust() const;
};

