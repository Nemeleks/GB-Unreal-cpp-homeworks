#pragma once
#include <iostream>


template<class T>
class RBF_Iterator : std::iterator<std::input_iterator_tag, T>
{
	friend class RBF_Cont<T>;
private:
	RBF_Iterator(T* ptr);
	T* ptr;
public:
	RBF_Iterator(const RBF_Iterator& it);

	bool operator !=(RBF_Iterator const& other) const;
	bool operator ==(RBF_Iterator const& other) const;
	RBF_Iterator& operator++();
	RBF_Iterator operator++(int);
	T& operator* () const;
};

template<class T>
inline RBF_Iterator<T>::RBF_Iterator(T* ptr):
	ptr(ptr)
{
}

template<class T>
inline RBF_Iterator<T>::RBF_Iterator(const RBF_Iterator& it) :
	ptr(it.ptr)
{
}

template<class T>
inline bool RBF_Iterator<T>::operator!=(RBF_Iterator const& other) const
{
	return ptr != other.ptr;
}

template<class T>
inline bool RBF_Iterator<T>::operator==(RBF_Iterator const& other) const
{
	return ptr == other.ptr;
}

template<class T>
inline RBF_Iterator<T>& RBF_Iterator<T>::operator++()
{
	++ptr;
	return *this;
}

template<class T>
inline RBF_Iterator<T> RBF_Iterator<T>::operator++(int)
{
	RBF_Iterator temp(ptr);
	++(*this);
	return temp;
}

template<class T>
inline T& RBF_Iterator<T>::operator*() const
{
	return *ptr;
}





