#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <math.h>
#include <numeric>

template <class Container, class T>
void insert_sorted(Container& cont, const T& value)
{
	typename Container::iterator it = std::upper_bound(std::begin(cont), std::end(cont), value);
	cont.insert(it, value);
}

int main()
{
	std::cout << "-------------4.1 START-------------" << std::endl;
	std::deque<int> deq = { 1,2,3,4,5,6,7,8,9,11,14,19 };
	insert_sorted(deq, 12);
	for (const auto& n : deq)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;
	std::list<std::string> lst = { "a","c","g" };
	insert_sorted(lst, "b");
	for (const auto& n : lst)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;
	std::cout << "-------------4.1 END---------------" << std::endl;
	std::cout << "-------------4.2 START-------------" << std::endl;

	std::vector<double> vec(100);
	double angle = 0.0;
	generate(vec.begin(), vec.end(), [&angle]()mutable {angle += (2 * 3.1415 / 100); return (32 * sin(angle) + 100); });

	std::cout << "analog: " << std::endl;
	copy(vec.begin(), vec.end(), std::ostream_iterator<double>{std::cout, " "});
	std::cout << std::endl;
	std::vector<int> v;
	auto dti = [](double i) {
		return trunc(i);
	};
	transform(vec.begin(), vec.end(), back_inserter(v), dti);
	std::cout << "digital: " << std::endl;
	copy(v.begin(), v.end(), std::ostream_iterator<int>{std::cout, " "});
	std::cout << std::endl;

	//	for test
	double failure = 0;
	for (size_t i = 0; i < 100; i++)
	{
		failure += pow((vec[i] - v[i]), 2);
	}
	std::cout << "failure(for) = " << failure << std::endl;


	std::vector<double> flr;
	transform(vec.begin(), vec.end(), v.begin(), back_inserter(flr), [](double i, double j) {return pow((i - j), 2); });
	std::cout << "failure(algorithm) = " << accumulate(begin(flr), end(flr), decltype(flr)::value_type(0.0)) << std::endl;
	std::cout << "-------------4.2. END---------------" << std::endl;

	return 0;
}