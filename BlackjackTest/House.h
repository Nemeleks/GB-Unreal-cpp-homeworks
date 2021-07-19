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
    void Win() ;
    void Lose() const;
    void Push() ;
    int getWins() const;
    int getPushes() const;
};