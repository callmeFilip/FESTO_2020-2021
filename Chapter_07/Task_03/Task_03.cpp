#include "Header.h"

int function() // __Z8functionv
{
    return 1;
}

extern int functionExtern() // __Z14functionExternv
{
    return 1;
}

const int functionConst(const int) // __Z13functionConsti
{
    return 0;
}

double function(int, int, double) // __Z8functioniid
{
    return 0.0;
}

static bool functionStatic(int, float) //__ZL14functionStaticif
{
    return true;
}

int Task_03::function(int, double, float) // __ZN7Task_038functionEidf
{
    return 23;
}

void Task_03::function() //__ZN7Task_038functionEv
{
    //do nothing
}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}
