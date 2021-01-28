#include <iostream>
#include "Header.h"

namespace
{
    void print()
    {
        std::cout << "Header.cpp" << std::endl; // generates warning, beacause it's unique and unused
    }
} // unnamed namespace
