#include <iostream>
#include "Initializer.h"

int Initializer::initCount = 0;

Initializer::Initializer()
{
    std::cout << "Initializer()" << std::endl;

    if (initCount == 0)
    {
        ++initCount;
        g_objNoParam = new Mirror();
        g_objParam1 = new Mirror(*g_objNoParam);
        g_objParam2 = new Mirror(*g_objParam1);
        g_objParam3 = new Mirror(*g_objParam2);
        g_objParam4 = new Mirror(*g_objParam3);
    }
}
Initializer::~Initializer()
{
    std::cout << "~Initializer()" << std::endl;

    if (initCount == 1)
    {
        --initCount;
        delete g_objParam4;
        delete g_objParam3;
        delete g_objParam2;
        delete g_objParam1;
        delete g_objNoParam;
    }
}
