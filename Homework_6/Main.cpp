#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

int main()
{
	//////////////////////////////////////////////////////
	///--------------------- TASK 1 -------------------/// 
	////////////////////////////////////////////////////// 
 
	cout << "--------------- TASK 1 ---------------" << endl;
	long* arrt1;
	int size;
	cout << "Enter size of array of 2 power:" << endl;
	cin >> size;
	arrt1 = new (nothrow) long[size];
	if (arrt1 != nullptr)
	{
		fill_array(arrt1, size);
		print_array(arrt1, size);
		delete[] arrt1;
		arrt1 = nullptr;
	}
	else
	{
		cout << "Error memory allocation";
		return 1;
	}

	//////////////////////////////////////////////////////
	///--------------------- TASK 2 -------------------/// 
	////////////////////////////////////////////////////// 

	int** arrt2;
	int m = 4;
	int n = 4;
	arrt2 = new (nothrow) int* [m];
	if (arrt2 != nullptr)
	{
		for (int i = 0; i < n; i++)
		{
			arrt2[i] = new (nothrow) int[n];
			if (arrt2[i] == nullptr)
			{
				cout << "Error memory allocation";
				return 1;
			}
		}
		cout << "--------------- TASK 2 ---------------" << endl;
		cout << "random matrix 4x4:" << endl;
		random_matrix(arrt2, m, n);
		print_matrix(arrt2, m, n);
		for (int i = 0; i < n; i++)
		{
			delete[] arrt2[i];
		}
		delete[] arrt2;
		arrt2 = nullptr;
	}
	else
	{
		cout << "Error memory allocation";
		return 1;
	}


	//////////////////////////////////////////////////////
	///--------------------- TASK 3 -------------------/// 
	////////////////////////////////////////////////////// 
	cout << "--------------- TASK 3 ---------------" << endl;
	cout << "Create first file: " << endl;
	create_txt();
	cout << "Create second file: " << endl;
	create_txt();

	//////////////////////////////////////////////////////
	///--------------------- TASK 4 -------------------/// 
	////////////////////////////////////////////////////// 
	cout << "--------------- TASK 4 ---------------" << endl;
	cout << "the solution directory contains 2 files (tocopy1.txt and tocopy2.txt) with text with line breaks and space strings that can be combined into one file " << endl;
	sum_file();

	//////////////////////////////////////////////////////
	///--------------------- TASK 5 -------------------/// 
	////////////////////////////////////////////////////// 
	cout << "--------------- TASK 5 ---------------" << endl;
	find_in_file();
	return 0;
}