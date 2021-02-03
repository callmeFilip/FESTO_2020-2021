#include "Stack.h"
#include <iostream>
int main()
{
    Stack doubleStack;

    doubleStack.initialize();

    int a = 10;
    doubleStack.push(&a);
    std::cout << (*(int *)doubleStack.peek()) << std::endl;

    int b = 13;
    doubleStack.push(&b);

    std::cout << (*(int *)doubleStack.pop()) << std::endl;
    std::cout << (*(int *)doubleStack.pop()) << std::endl;

    return 0;
}
