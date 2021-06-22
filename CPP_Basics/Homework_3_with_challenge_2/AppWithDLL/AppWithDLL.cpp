#include <iostream>
#include "DLLforChallenge.h"


extern const int a;
extern const int b;
extern const int c;
extern const int d;
extern int e, f, g, arr[3][3][3];
int main()
{
    int answer;
    std::cout << "Welcome to my Homework with DLL Challenge ! =)" << std::endl;
    do
    {
        std::cout << "Choose exercise: \n Enter 1 for 1st exercise \n Enter 2 for 2nd exercise \n Enter 3 for 3rd exercise \n Enter 5 for exit \n";
        std::cin >> answer;
        switch (answer)
        {
        case 1:
            std::cout << "a*(b+(c/d), extern const ints a,b,c,d with static_cast <float>" << std::endl;
            firstExercise(a, b, c, d);
            break;
        case 2:
            std::cout << "If var <= 21 result is 21 - var, if var > 21 result is 2*(var-21). 1 line var = 25, 2 line 21, 3 line 15" << std::endl;
            secondExercise(e);
            secondExercise(f);
            secondExercise(g);
            break;
        case 3:
            std::cout << "We have array [3][3][3], in funcction we create int* ptr and ptr = &arr[1][1][1], then cout *ptr" << std::endl;
            thirdExercise(arr);
            break;
        default:
            break;
        }

    } while (answer != 5);





    return 0;
    
}
