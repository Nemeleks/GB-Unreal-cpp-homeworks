#pragma once

#ifdef DLLforChallenge_EXPORTS
#define DLLforChallenge_API _declspec(dllexport)
#else
#define DLLforChallenge_API __declspec(dllimport)
#endif

extern "C" DLLforChallenge_API void firstExercise(const int a, const int b, const int c, const int d);
extern "C" DLLforChallenge_API void secondExercise(int a);
extern "C" DLLforChallenge_API void thirdExercise(int(&arr)[3][3][3]);