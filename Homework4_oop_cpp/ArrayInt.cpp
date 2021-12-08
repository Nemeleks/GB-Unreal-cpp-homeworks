#include "ArrayInt.h"

ArrayInt::ArrayInt():
	m_length(0),
	m_data(nullptr)
{
}
ArrayInt::ArrayInt(int lenght) :
	m_length(lenght)
{
	assert(lenght >= 0);

	if (lenght > 0)
	{
		m_data = new int[lenght];
	}
		
	else
	{
		m_data = nullptr;
	}
}

ArrayInt::~ArrayInt()
{
	delete[] m_data;
}

void ArrayInt::erase()
{
	delete[] m_data;
	m_data = nullptr;
	m_length = 0;
}

int ArrayInt::getLenght() const
{
	return m_length;
}

int& ArrayInt::operator[](int index)
{
	assert(index >= 0 && index < m_length);

	return m_data[index];
}

void ArrayInt::resize(int newLength)
{
	if (m_length == newLength)
	{
		return;
	}
	if (newLength <= 0)
	{
		erase();
		return;
	}
	int* data = new int[newLength];
	if (m_length > 0)
	{
		int elementsToCopy = newLength > m_length ? m_length : newLength;
		for (size_t i = 0; i < elementsToCopy; i++)
		{
			data[i] = m_data[i];
		}
	}
	delete[] m_data;
	m_data = data;
	m_length = newLength;
}

void ArrayInt::insertBefore(int value, int index)
{
	assert(index >= 0 && index <= m_length);

	int* data = new int[m_length + 1];
	
	for (size_t i = 0; i < index; i++)
	{
		data[i] = m_data[i];
	}
	data[index] = value;
	for (size_t i = index; i < m_length; i++)
	{
		data[i + 1] = m_data[i];
	}
	delete[] m_data;
	m_data = data;
	++m_length;
}

void ArrayInt::push_back(int value)
{
	insertBefore(value, m_length);
}

void ArrayInt::pop_back()
{
	assert(m_length > 0);

	resize(m_length - 1);
}

void ArrayInt::pop_front()
{
	assert(m_length > 0);
	int* data = new int[m_length - 1];
	for (size_t i = 0; i < m_length-1; i++)
	{
		data[i] = m_data[i+1];
	}
	delete[] m_data;
	m_data = data;
	m_length--;
}

void ArrayInt::sort()
{
	int temp;
	for (size_t i = 0; i < m_length - 1; i++)
	{
		for (size_t j = 0; j < m_length - i - 1; j++)
		{
			if (m_data[j] > m_data[j+1])
			{
				temp = m_data[j];
				m_data[j] = m_data[j + 1];
				m_data[j + 1] = temp;
			}
		}
	}
}

void ArrayInt::printArr() const
{
	assert(m_length > 0);
	for (size_t i = 0; i < m_length; i++)
	{
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}
