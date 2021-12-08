#pragma once
#include <iostream>
#include <sstream>
#include <mutex>
class pcout :
    public std::ostringstream
{
private:
    static std::mutex mutexCout;

public:
    pcout() {};

    ~pcout()
    {
        std::lock_guard<std::mutex> guard(mutexCout);
        std::cout << this->str();
    }
};

