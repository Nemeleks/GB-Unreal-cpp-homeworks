#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
class ArrayInt
{
private:
	int m_length;
	int* m_data;
public:
	ArrayInt();
	ArrayInt(int lenght);
	~ArrayInt();
	void erase();
	int getLenght() const;
	int& operator[](int index);
	void resize(int newLenght);
	void insertBefore(int value, int index);
	void push_back(int value);
	void pop_back();
	void pop_front();
	void sort();
	void printArr() const;

};

