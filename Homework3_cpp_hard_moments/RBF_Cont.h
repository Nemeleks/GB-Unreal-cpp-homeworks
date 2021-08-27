#pragma once
//#include "RBF_Iterator.h"
#include <memory>
template <class T>
class RBF_Iterator;

template <class T>
class RBF_Cont
{
public:
	typedef RBF_Iterator<T> iterator;
	typedef RBF_Iterator<const T> const_iterator;

	RBF_Cont(std::initializer_list< T > values);

	iterator begin();
	iterator end();

	const_iterator begin() const;
	const_iterator end() const;

	size_t getSize() const;

private:
	const size_t size;	
	std::unique_ptr<T[]> data;
};


template <class T>
inline RBF_Cont<T>::RBF_Cont(std::initializer_list< T > values) :
	size(values.size()),
	data(new T[size])
{
	std::copy(values.begin(), values.end(), data.get());
}

template <class T>
inline typename RBF_Cont<T>::iterator RBF_Cont<T>::begin()
{
	return iterator(data.get());
}

template <class T>
inline typename RBF_Cont<T>::iterator RBF_Cont<T>::end()
{
	return iterator(data.get()+size);
}

template <class T>
inline typename RBF_Cont<T>::const_iterator RBF_Cont<T>::begin() const
{
	return const_iterator(data.get());
}

template <class T>
inline typename RBF_Cont<T>::const_iterator RBF_Cont<T>::end() const
{
	return const_iterator(data.get()+size);
}

template<class T>
inline size_t RBF_Cont<T>::getSize() const
{
	return size;
}
;
