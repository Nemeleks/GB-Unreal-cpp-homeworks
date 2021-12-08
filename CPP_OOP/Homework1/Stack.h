#pragma once
class Stack
{
private:
	int arr[10];
	int length;

public:
	Stack() :
		length(0)
	{
		for (size_t i = 0; i < 10; i++)
		{
			arr[i] = 0;
		}
	}

	void reset();
	bool push(int a);
	int pop();
	void print();
};

