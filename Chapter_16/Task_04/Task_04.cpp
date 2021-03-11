#include "TPStash.h"
#include <iostream>

int main()
{

    PStash<int, 5> istash;
    for (size_t i = 0; i < 100; i++)
    {
        istash.add(new int(2));
    }
    return 0;
}
