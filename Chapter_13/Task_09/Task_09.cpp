#include "Counted.h"

int main()
{
    Counted *obj = new Counted();

    void *vp = (void *)obj;

    delete vp; // This generates warning

    return 0;
}

/**
 * The memory is released, but
 * destructor isn't called. The compiler
 * don't know which destructor to call since
 * this is void* object.
 * 
 * To solve this problem we need to cast the void* back 
 * to Counted* before delete operator.
*/
