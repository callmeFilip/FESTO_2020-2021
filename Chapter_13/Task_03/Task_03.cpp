#include "PStash.h"
#include "Counted.h"

int main()
{
    {
        PStash storage;

        for (int i = 0; i < 5; i++)
        {
            storage.add(new Counted());
        }
    }

    return 0;
}

/**
 * Program exits early in require.h
 * because the storage is not empty 
 * and this will create memory leak.
*/
