#include "Apple.h"
#include <iostream>

// #define EXPLICIT

void function(Apple obj) // Warning can be ignored
{
    std::cout << "func called" << std::endl;
}

int main()
{
#ifdef EXPLICIT

    function(Apple(Orange()));

#else

    function(Orange());

#endif
    return 0;
}
