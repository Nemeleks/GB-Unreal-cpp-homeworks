#include "Stack.h"
#include <iostream>

void Stack::reset()
{
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
	length = 0;
}

bool Stack::push(int a)
{
	if (length == 10)
	{
		std::cout << "Error! Stack is full." << std::endl;
		return false;
	}	
	arr[length] = a;
	length++;
	return true;
}

int Stack::pop()
{
	if (length == 0)
	{
		std::cout << "Error! Stack is empty." << std::endl;
		return 0;
	}
	length--;
	return arr[length];
}

void Stack::print()
{
	std::cout << "( ";
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << ")" << std::endl;
}




