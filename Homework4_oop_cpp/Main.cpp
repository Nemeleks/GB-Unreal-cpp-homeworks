#include "ArrayInt.h"
#include <vector>

//4.2 Start//
int uniqueValues(std::vector<int> a)
{
	auto last = std::unique(a.begin(), a.end());
	a.erase(last, a.end());
	std::sort(a.begin(), a.end());
	last = std::unique(a.begin(), a.end());
	a.erase(last, a.end());
	return a.size();
}
//4.2 end//
int main()
{
	// 4.1 start //
	ArrayInt arr(3);
	arr[0] = 3;
	arr[1] = 5;
	arr[2] = 1;
	arr.printArr();
	std::cout << arr.getLenght() << std::endl;
	arr.pop_back();
	std::cout << arr.getLenght() << std::endl;
	arr.printArr();
	arr.pop_front();
	arr.printArr();
	arr.push_back(9);
	arr.push_back(3);
	arr.push_back(1);
	arr.printArr();
	arr.sort();
	arr.printArr();
	// 4.1 end //

	// 4.2 start//
	std::vector<int> a = { 1,5,3,6,8,3,5,8,0,2,5,78,3,23,5,3,1,7,9 };
	std::cout << "vector a has " << uniqueValues(a) << " different values" << std::endl;
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << " ";
	}
	//4.2 end//

}