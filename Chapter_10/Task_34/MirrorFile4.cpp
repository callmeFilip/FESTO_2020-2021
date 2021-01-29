#include "Mirror.h"
extern Mirror &g_objParam2Init();
Mirror &g_objParam3Init()
{
    static Mirror g_objParam3(g_objParam2Init());

    return g_objParam3;
}
