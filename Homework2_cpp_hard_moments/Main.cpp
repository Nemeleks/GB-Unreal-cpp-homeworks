#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <Windows.h>
#include <vector>
#include "Timer.h"

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
    setlocale(LC_ALL, "Russian");
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
    //====================================EXCERCISE 2 END==========================================

    //====================================EXCERCISE 3 START=========================================
   
    std::string vowels = "óÓåÅûÛàÀîÎýÝÿßèÈþÞ";

    std::ifstream in("C:\\Users\\Professional\\source\\repos\\test\\test\\1.txt");
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

    std::ifstream in2("C:\\Users\\Professional\\source\\repos\\test\\test\\1.txt");
    if (in2.is_open())
    {
        t.start("count_if and for");
        size_t count = std::count_if
        (
            std::istreambuf_iterator<char>(in2),
            std::istreambuf_iterator<char>(),
            [vowels](char x) {for (const auto& n : vowels) { if (n == x) return true; }return false; });
        t.print();
        std::cout << "vowels in file: " << count << std::endl;
    }
    else
    {
        std::cout << "error" << std::endl;
    }
    in2.close();

    std::ifstream in3("C:\\Users\\Professional\\source\\repos\\test\\test\\1.txt");
    if (in3.is_open())
    {
        int count = 0;
        t.start("for and find");
        std::string str;
        while (std::getline(in3, str))
            for (size_t j = 0; j < str.size(); j++)
            {
                if (vowels.find(str[j]) != std::string::npos)
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
    in3.close();

    std::ifstream in4("C:\\Users\\Professional\\source\\repos\\test\\test\\1.txt");
    if (in4.is_open())
    {
        int count = 0;
        t.start("for and for");
        std::string str;
        while (std::getline(in4,str))
            for (size_t j = 0; j < str.size(); j++)
            {
                for (size_t i = 0; i < vowels.size(); i++)
                {
                    if (str[j] == vowels[i])
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
    in4.close();
    //====================================EXCERCISE 3 END==========================================

    return 0;
}
