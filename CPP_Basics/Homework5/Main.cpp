#include <iostream>
#include "f_arrays.h"
const int ARRAY_SIZE = 8;
using namespace std;



int main()
{
	cout << "Task 1" << endl;
	double arr_t1[ARRAY_SIZE] = { 7.876, 8.632, 3.64, 9.975, 1.6492, 846.6268, 724.8362, 6421.49 };
	print_array(arr_t1, ARRAY_SIZE);

	cout << "\nTask 2" << endl;
	int arr_t2[ARRAY_SIZE] = { 0,1,0,0,1,1,1,0 };
	cout << "array before swap:" << endl;
	print_array(arr_t2, ARRAY_SIZE);
	swap_array(arr_t2, ARRAY_SIZE);
	cout << "array after swap:" << endl;
	print_array(arr_t2, ARRAY_SIZE);

	cout << "\nTask 3" << endl;
	int arr_t3[ARRAY_SIZE];
	fill_array(arr_t3, ARRAY_SIZE);
	print_array(arr_t3, ARRAY_SIZE);

	cout << "\nTask 4" << endl;
	int arr_t4[ARRAY_SIZE] = { 1,2,3,4,5,6,7,8 };
	int n;
	cout << "array before shift" << endl;
	print_array(arr_t4, ARRAY_SIZE);
	cout << "enter int num for shift array. '-num' for left shift or 'num' for right shift" << endl;
	cin >> n;
	shift_array(arr_t4, ARRAY_SIZE, n);
	cout << "array after shift for " << n << endl;
	print_array(arr_t4, ARRAY_SIZE);

	cout << "\nTask 5" << endl;
	int arr_t5[ARRAY_SIZE] = { 1, 2, 3, 4, 3, 5, 15, 33 };
	cout << "your array is:" << endl;
	print_array(arr_t5, ARRAY_SIZE);
	if (checkBalance_array(arr_t5, ARRAY_SIZE))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	return 0;
}
