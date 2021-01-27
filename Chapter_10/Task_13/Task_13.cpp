#include <iostream>
#include "Tracker.h"

int main()
{
    std::cout << track(3) << std::endl; // Tracker.cpp:2:12: error: 'int track(int)' was declared 'extern' and later 'static' [-fpermissive]
    return 0;
}
