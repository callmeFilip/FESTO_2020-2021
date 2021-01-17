#include <iostream>

#include "A.h"
#include "B.h"

inline A::A()
{
    std::cout << "Class A created!" << std::endl;
}

int main()
{
    B array[10]; //warning can be ignored

    return 0;
}
