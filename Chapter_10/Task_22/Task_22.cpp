#include "DoubleStash.h"
#include "IntStash.h"

#define FIXED
//#define GLOBAL

#ifdef GLOBAL
using namespace DoubleStash;
using namespace IntStash;
#endif // GLOBAL

void function()
{
#ifndef GLOBAL
#ifndef FIXED
    using namespace DoubleStash;
    using namespace IntStash;
#endif
#endif // not GLOBAL

#ifdef FIXED

    IntStash::Stash objInt(1); // Stash is ambiguous
    DoubleStash::Stash objDouble(1.0);

#else

    Stash objInt(1); // Stash is ambiguous

#endif
}

int main()
{
    function();

    return 0;
}
