#include <iostream>

#include "Initializer.h"
#include "Mirror.h"

Mirror *g_objParam4;

int main()
{
    if (g_objParam4->test())
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }

    return 0;
}

// The result is true, and that indicates the fixed error
