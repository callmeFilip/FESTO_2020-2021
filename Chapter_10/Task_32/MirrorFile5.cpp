#include "Mirror.h"
#include <iostream>
extern Mirror g_objParam3;
Mirror g_objParam4(g_objParam3);

int main()
{
    if (g_objParam4.test())
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }

    return 0;
}

// The order of compiling doesn't matter, the result is always false
