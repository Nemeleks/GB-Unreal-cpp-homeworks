#include <iostream>
#include "mylib.h"
#include <string>
#include <fstream>

#define SwapINT(a, b) int tmp = a; a = b; b = tmp;

namespace task1
{
	void arr_fill(float* arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << "enter " << i << " element of array: ";
			std::cin >> arr[i];
		}
		std::cout << std::endl;
	}
	void arr_print(float* arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << "arr[" << i << "]" << " = " << arr[i] << std::endl;
		}
		std::cout << std::endl;
	}
	void arr_pn(float* arr, int size)
	{
		int pos = 0;
		int neg = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] >= 0)
			{
				pos++;
			}
			else
			{
				neg++;
			}
		}
		std::cout << "your array has " << pos << " positive and " << neg << " negative numbers" << std::endl;
	}
}

namespace task2
{
	void arr_fill(int* arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << "enter " << i << " element of array: ";
			std::cin >> arr[i];
		}
	}

	void arr_sort(int* arr, int size)
	{
		for (int i = size - 1; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
				if (arr[j] > arr[j + 1])
				{
					SwapINT(arr[j], arr[j + 1]);
				}
		}
	}

	void arr_print(int* arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << "arr[" << i << "]" << " = " << arr[i] << std::endl;
		}
		std::cout << std::endl;
	}
}

namespace task4
{
	void emp_fill(Employee* emp)
	{
		std::cout << "enter employee name : ";
		std::cin >> emp->name;
		std::cout << "enter employee last name : ";
		std::cin >> emp->lastName;
		std::cout << "enter employee position : ";
		std::cin.ignore();
		std::getline(std::cin, emp->position);
		std::cout << "enter employee salary : ";
		std::cin >> emp->salary;
	}

	void emp_print(Employee* emp)
	{
		std::cout << "Employye name is: " << emp->name << std::endl;
		std::cout << "Employye last name is: " << emp->lastName << std::endl;
		std::cout << "Employye position is: " << emp->position << std::endl;
		std::cout << "Employye salary is: " << emp->salary << " $" << std::endl;
	}

	void emp_toTxt(Employee* emp)
	{
		std::ofstream fout("Employee.txt");
		if (fout.is_open())
		{
			fout << "Employye name is: " << emp->name << std::endl;
			fout << "Employye last name is: " << emp->lastName << std::endl;
			fout << "Employye position is: " << emp->position << std::endl;
			fout << "Employye salary is: " << emp->salary << " $" << std::endl;
		}
		else
		{
			std::cout << "Can not create file!" << std::endl;
		}
	}
}

