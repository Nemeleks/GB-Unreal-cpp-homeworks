#pragma once
template<class T, class S>
class Pair
{
protected:
	T m_first;
	S m_second;
public:
	Pair(T first, S second);
	T first() const;
	S second() const;
};

template<class T, class S>
inline Pair<T, S>::Pair(T first, S second):
	m_first(first),
	m_second(second)
{
}

template<class T, class S>
inline T Pair<T, S>::first() const
{
	return m_first;
}

template<class T, class S>
inline S Pair<T, S>::second() const
{
	return m_second;
}
