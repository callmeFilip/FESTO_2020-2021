#include "Bird.h"

int main()
{
    Bird one;
    Bird two;

    // Overloaded operator<< test
    std::cout << one << std::endl;
    std::cout << two << std::endl;

    // Copy-constructor test
    Bird three(one);
    std::cout << "Content of third object: " << three << std::endl;

    // Overloaded operator= test
    three = two;
    std::cout << "Content of third object: " << three << std::endl;

    return 0;
}
