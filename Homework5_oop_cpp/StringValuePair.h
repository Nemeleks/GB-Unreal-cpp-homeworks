#pragma once
#include "Pair.h"
#include <iostream>

template<class T>
class StringValuePair : public Pair<std::string, T>
{

public:
	StringValuePair(std::string first, T second);
};

template<class T>
inline StringValuePair<T>::StringValuePair(std::string first, T second) :
	Pair<std::string, T>(first, second)
{
}

