#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <Windows.h>
#include <vector>
#include "Timer.h"

void vowelsCountIfFind(std::string& vowels, std::ifstream& in, Timer& t);
void vowelsCountIfFor(std::string& vowels, std::ifstream& in, Timer& t);
void vowelsForFind(std::string& vowels, std::ifstream& in, Timer& t);
void vowelsForFor(std::string& vowels, std::ifstream& in, Timer& t);
//====================================EXCERCISE 1 START==========================================
template<class T>
void Swap(T* left, T* right)
{
    T temp = *left;
    *left = *right;
    *right = temp;
}

template<class T>
void SwapMove(T* left, T* right)
{
    T temp = std::move(*left);
    *left = std::move(*right);
    *right = std::move(temp);
}
//====================================EXCERCISE 1 END==========================================

//====================================EXCERCISE 2 START==========================================
template<class T>
void SortPointers(std::vector<T*>& Nums)
{
    std::sort(Nums.begin(), Nums.end(), []( T* left,  T* right) {return *left < *right; });
}
//====================================EXCERCISE 2 END==========================================

int main()
{
    Timer t;
    //====================================EXCERCISE 1 START==========================================
    int firstNum = 72;
    int secondNum = 4;

    int* pFirstNum = &firstNum;
    int* pSecondNum = &secondNum;

    std::cout << *pFirstNum << " " << *pSecondNum << std::endl;
    t.start("Swap");
    Swap(pFirstNum, pSecondNum);
    t.print();
    std::cout << *pFirstNum << " " << *pSecondNum << std::endl;

    std::cout << std::endl;

    std::cout << *pFirstNum << " " << *pSecondNum << std::endl;
    t.start("SwapMove");
    Swap(pFirstNum, pSecondNum);
    t.print();
    std::cout << *pFirstNum << " " << *pSecondNum << std::endl;

    //====================================EXCERCISE 1 END==========================================
    
    //====================================EXCERCISE 2 START==========================================
    int thirdNum = 287;
    int fourthNum = 100;

    int* pThirdNum = &thirdNum;
    int* pFourthNum = &fourthNum;


    std::cout << "vector before sort: " << std::endl;
    std::vector<int*> Nums = { pFirstNum, pSecondNum, pThirdNum, pFourthNum };
    for (const auto& n : Nums)
    {
        std::cout << *n << " ";
    }
    std::cout << std::endl;

    std::cout << "vector after sort: " << std::endl;
    t.start("SortPoiters");
    SortPointers(Nums);
    for (const auto& n : Nums)
    {
        std::cout << *n << " ";
    }
    std::cout << std::endl;
    t.print();
    
    pFirstNum = nullptr;
    pSecondNum = nullptr;
    pThirdNum = nullptr;
    pFourthNum = nullptr;

    delete pFirstNum;
    delete pSecondNum;
    delete pThirdNum;
    delete pFourthNum;
    //====================================EXCERCISE 2 END==========================================

    //====================================EXCERCISE 3 START=========================================
   
    std::string vowels = "eEyYuUiIoOaA";
    std::ifstream in("1.txt");

    vowelsCountIfFind(vowels, in, t);
    vowelsCountIfFor(vowels, in, t);
    vowelsForFind(vowels, in, t);
    vowelsForFor(vowels, in, t);



    return 0;
}

void vowelsCountIfFind(std::string& vowels, std::ifstream& in, Timer& t)
{
    if (in.is_open())
    {
        t.start("count_if and find");
        size_t count = std::count_if
        (
            std::istreambuf_iterator<char>(in),
            std::istreambuf_iterator<char>(),
            [=](char x)
            {
                return   vowels.find(x) != std::string::npos;
            }
        );
        t.print();
        std::cout << "vowels in file: " << count << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }
    in.close();
}

void vowelsCountIfFor(std::string& vowels, std::ifstream& in, Timer& t)
{
    in.open("1.txt");
    if (in.is_open())
    {
        t.start("count_if and for");
        size_t count = std::count_if
        (
            std::istreambuf_iterator<char>(in),
            std::istreambuf_iterator<char>(),
            [vowels](char x) {for (const auto& n : vowels) { if (n == x) return true; }return false; });
        t.print();
        std::cout << "vowels in file: " << count << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }
    in.close();
}

void vowelsForFind(std::string& vowels, std::ifstream& in, Timer& t)
{
    in.open("1.txt");
    if (in.is_open())
    {
        int count = 0;
        t.start("for and find");
        char c;
        for (in >> c; !in.eof(); in >> c)
        {
            if (vowels.find(c) != std::string::npos)
            {
                count++;
            }
        }
        t.print();
        std::cout << "vowels in file: " << count << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }
    in.close();
}

void vowelsForFor(std::string& vowels, std::ifstream& in, Timer& t)
{
    in.open("1.txt");
    if (in.is_open())
    {
        int count = 0;
        t.start("for and for");
        char c;
        for (in >> c; !in.eof(); in >> c)
        {
            for (size_t i = 0; i < vowels.size(); i++)
            {
                if (c == vowels[i])
                {
                    count++;
                }
            }
        }
        t.print();
        std::cout << "vowels in file: " << count << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }
    in.close();
}

//====================================EXCERCISE 3 END==========================================
