#include <iostream>

using namespace std;

void shift_array(int* arr, int size, int step)
{
	int t;
	int t_step = step;
	if (step < 0)
	{
		step = -(step);
	}
	if (step > size)
	{
		step %= size;
	}
	if (t_step < 0)
	{
		for (int j = 0; j < step; j++)
		{
			for (int i = 0; i < size; i++)
			{
				if (i + 1 < size)
				{
					t = arr[i + 1];
					arr[i + 1] = arr[i];
					arr[i] = t;
				}

			}
		}
	}
	else
	{
		for (int j = 0; j < step; j++)
		{
			for (int i = (size - 1); i > 0; i--)
			{
				t = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = t;
			}
		}
	}


}

void print_array(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void print_array(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swap_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}

	}
}

void fill_array(int* arr, int size)
{
	int j = 1;
	for (int i = 0; i < size; i++)
	{
		arr[i] = j;
		j += 3;
	}
}

bool checkBalance_array(int* arr, int size)
{
	int result = 0;
	int left = 0;
	int right = 0;
	for (int i = 0; i < size; i++)
	{
		result += arr[i];
	}
	if (result % 2 != 0)
	{
		cout << "result = " << result << endl;
		return 0;
	}
	else
	{
		cout << "result = " << result << endl;
		for (int i = 0; i < size; i++)
		{
			left += arr[i];
			right = 0;
			for (int j = (size-1); j > i; j--)
			{
				right += arr[j];
			}
			if (left == right)
			{
				cout << "equal between " << i + 1 << " left nums and " << (size-1) - i << " right nums" << endl;
				cout << "left sum: " << left << " , right sum: " << right << endl;
				return 1;
			}
		}
		return 0;
	}
}