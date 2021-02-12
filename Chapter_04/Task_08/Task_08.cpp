#include "Stack.h"
#include <iostream>
int main()
{
    const int STACKELEMENTS = 25;
    Stack doubleStack;

    doubleStack.initialize();

    double var = 10.0;

    for (int i = 0; i < STACKELEMENTS; i++)
    {
        doubleStack.push(&var);
    }

    for (int i = 0; i < STACKELEMENTS; i++)
    {
        std::cout << i + 1 << ". " << (*(double *)doubleStack.pop()) << std::endl;
    }

    return 0;
}
