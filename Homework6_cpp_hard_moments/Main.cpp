#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <thread>
#include <chrono>
#include <math.h>
#include <random>

#include "pcout.h"

using namespace std::literals::chrono_literals;

std::mutex pcout::mutexCout;
std::mutex mutexHouse;



void foo1()
{
	pcout{} << "Thread 1 has MutexCout" << std::endl;
}
void foo2()
{
	pcout{} << "Thread 2 has MutexCout" << std::endl;
}
void foo3()
{
	pcout{} << "Thread 3 has MutexCout" << std::endl;
}
void foo4(int x)
{
	pcout{} <<"Thread 4 has MutexCout. Loop = " << x << std::endl;
}


bool isPrime(unsigned result)
{
	if (result == 1) return false;
	for (size_t i = 2; i < std::sqrt(result); i++)
	{
		if (result % i == 0)
		{
			return false;
		}
	}
	return true;
}

void Prime(long long index, long long& result, long long& primeCounter, bool& isResaltReady)
{
	while (primeCounter < index)
	{
		result++;
		if (isPrime(result))
		{
			primeCounter++;
		}
	}
	isResaltReady = true;
}

void printProgress(long long x, long long y)
{
	std::cout << "Progress: " << x <<" of " << y << std::endl;
}
long long primeNumber(long long index)
{
	long long result = 0;
	long long primeCounter = 0;
	bool isResultReady = false;
	std::thread t2{ Prime,std::ref(index), std::ref(result), std::ref(primeCounter), std::ref(isResultReady) };
	while (!isResultReady)
	{
		system("cls");
		std::cout << "Progress: " << primeCounter / (index/100.0) << "%" << std::endl;
		std::this_thread::sleep_for(200ms);
	}
	t2.join();

	system("cls");
	std::cout << "Progress: " << primeCounter / (index /100.0) << "%" << std::endl;
	return result;
}

void master(std::vector<int>& things)
{
	std::random_device rd;
	std::mt19937 generator(rd());
	std::uniform_int_distribution<int> distribution(1, 100);
	while (!things.empty())
	{
		mutexHouse.lock();

		int newThing = distribution(generator);
		things.push_back(newThing);

		std::cout << "The Master came home and brought a thing with a price of: " << newThing << std::endl;
		std::cout << "Now the house has things with prices: " << std::endl;
		for (const auto& n : things)
		{
			std::cout << n << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
		mutexHouse.unlock();
		std::this_thread::sleep_for(1500ms);
	}
	
}

void thief(std::vector<int>& things)
{

	while (!things.empty())
	{
		mutexHouse.lock();
		std::vector<int>::iterator highPriceThing = std::max_element(things.begin(), things.end());
		std::cout << "A thief came to the house and stole a thing with a price: " << *highPriceThing << std::endl;
		things.erase(highPriceThing);
		std::cout << "Now the house has things with prices: " << std::endl;
		for (const auto& n : things)
		{
			std::cout << n << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
		mutexHouse.unlock();
		std::this_thread::sleep_for(1s);
	}

}


int main()
{
	std::cout << "Exercise 1" << std::endl;
	size_t length = 20;
	for (size_t i = 0; i < length; i++)
	{
		std::thread t1{ foo1 };
		std::thread t2{ foo2 };
		std::thread t3{ foo3 };
		std::thread t4{ foo4, std::ref(i) };

		t1.join();
		t2.join();
		t3.join();
		t4.join();
		pcout{} << std::endl;
	}
	std::cout << "Exercise 2." << std::endl;
	system("pause");
	system("cls");

	long long primeNumberIndex = 1'000'000;
	long long pNumber = primeNumber(primeNumberIndex);
	std::cout << primeNumberIndex << " prime number is " << pNumber << std::endl;
	
	std::cout << "Exercise 3." << std::endl;
	system("pause");
	system("cls");
	std::vector<int> things = { 19,25,36,99 };

	std::thread masterThread(master, std::ref(things));
	std::thread theifThread(thief, std::ref(things));
	masterThread.join();
	theifThread.join();
	std::cout << "The thief stole all the things from the house." << std::endl;
}
