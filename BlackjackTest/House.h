#pragma once
#include "GenericPlayer.h"
class House :
    public GenericPlayer
{
public:
    House(const std::string& name = "House");
    virtual ~House();
    virtual bool isHitting() const;
    void FlipFirstCard();
    void Win() const;
    void Lose() const;
    void Push() const;
};

