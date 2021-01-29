#include "Mirror.h"

Mirror &g_objInit()
{
    static Mirror g_obj;

    return g_obj;
}
