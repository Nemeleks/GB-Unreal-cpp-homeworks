#pragma once
#include "GenericPlayer.h"
class Player :
    public GenericPlayer
{
public:
    Player(const std::string& name = "");
    virtual ~Player();
    virtual bool isHitting() const;
    void Win() ;
    void Lose() const;
    void Push() ;

    int getWins() const;
    int getPushes() const;
};

