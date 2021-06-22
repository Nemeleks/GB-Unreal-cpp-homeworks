#pragma once

namespace task1
{
	void arr_fill(float* arr, int size);
	void arr_print(float* arr, int size);
	void arr_pn(float* arr, int size);
}

namespace task2
{
	void arr_fill(int* arr, int size);
	void arr_sort(int* arr, int size);
	void arr_print(int* arr, int size);
}

namespace task4
{
#pragma pack(push, 1)
	struct Employee
	{
		std::string name;
		std::string lastName;
		std::string position;
		float salary;
	};
#pragma pack (pop)
	void emp_toTxt(Employee* emp);
	void emp_print(Employee* emp);
	void emp_fill(Employee* emp);
}
