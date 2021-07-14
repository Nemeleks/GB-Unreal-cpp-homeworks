#pragma once
#include "Hand.h"
#include <iostream>
class GenericPlayer :
    public Hand
{
private:
    std::string playerName;
public:
    virtual bool isHitting();
    bool isBoosted();
    void Bust() const;
};

