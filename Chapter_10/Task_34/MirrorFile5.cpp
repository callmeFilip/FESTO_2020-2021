#include "Mirror.h"
#include <iostream>
extern Mirror &g_objParam3Init();
Mirror &g_objParam4Init()
{
    static Mirror g_objParam4(g_objParam3Init());

    return g_objParam4;
}

int main()
{
    Mirror g_objParam4 = g_objParam4Init();
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
