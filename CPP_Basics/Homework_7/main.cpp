#include <iostream>
#include "mylib.h"
#include <fstream>
#include <string>

#define SIZE 8

#define CHECK(a, b) ((a >= 0) && (a < b) ? true : false)

int main()
{
	
	std::cout << "--------------- TASK 1(with 5) ---------------" << std::endl;
	float arr[SIZE];
	task1::arr_fill(arr, SIZE);
	task1::arr_print(arr, SIZE);
	task1::arr_pn(arr, SIZE);

	std::cout << std::endl;
	std::cout << "--------------- TASK 2 ---------------" << std::endl;
	int a;
	std::cout << "enter number for check : ";
	std::cin >> a;
	if (CHECK(a, 16))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "--------------- TASK 3 ---------------" << std::endl;
	int array[SIZE];
	task2::arr_fill(array, SIZE);
	task2::arr_print(array, SIZE);
	task2::arr_sort(array, SIZE);
	task2::arr_print(array, SIZE);

	std::cout << std::endl;
	std::cout << "--------------- TASK 4 ---------------" << std::endl;
	task4::Employee* emp1 = new (std::nothrow)task4::Employee;
	if (emp1 != nullptr)
	{
		task4::emp_fill(emp1);
		task4::emp_print(emp1);
		task4::emp_toTxt(emp1);
		std::cout << "size of emp1 struct is: " << sizeof(task4::Employee) << std::endl;
	}
	else
	{
		std::cout << "bad memory alloc";
	}
	delete emp1;


	return 0;

}
