#include "Mirror.h"

extern Mirror &g_objInit();

Mirror &g_objParam1Init()
{
    static Mirror g_objParam1(g_objInit());

    return g_objParam1;
}
