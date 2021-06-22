// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include <utility>
#include <limits.h>
#include "DLLforChallenge.h"
#include <iostream>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

void firstExercise(const int a, const int b, const int c, const int d)
{
    std::cout << a * (b + (static_cast <float>(c) / d)) << std::endl;
}

void secondExercise(int a)
{
    int b = (a <= 21) ? (21 - a) : 2 * (a - 21);
    std::cout << b << std::endl;
}

void thirdExercise(int(&arr)[3][3][3])
{
    int* ptr;
    ptr = &arr[1][1][1];
    std::cout << *ptr << std::endl;
}