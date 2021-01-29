#include "Mirror.h"

extern Mirror &g_objParam1Init();

Mirror &g_objParam2Init()
{
    static Mirror g_objParam2(g_objParam1Init());

    return g_objParam2;
}
