#pragma once
#include <iostream>
template<class T>
class Pair1
{
private:
	T m_first;
	T m_second;
public:
	Pair1(T first, T second);
	T first() const;
	T second() const;
};

template<class T>
inline Pair1<T>::Pair1(T first, T second) :
	m_first(first),
	m_second(second)
{
}

template<class T>
inline T Pair1<T>::first() const
{
	return m_first;
}

template<class T>
inline T Pair1<T>::second() const
{
	return m_second;
}

