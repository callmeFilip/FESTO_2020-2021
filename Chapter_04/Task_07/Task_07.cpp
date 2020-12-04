#include <iostream>
#include "Stash.h"

int main()
{
    Stash doubleStash(sizeof(double));

    for (double i = 0; i < 25; i += 1.0)
    {
        doubleStash.add(&i);
    }

    for (size_t i = 0; i < doubleStash.length(); i++)
    {
        std::cout << "index: " << i << "\t=\t"
                  << *(double *)doubleStash.at(i) << std::endl;
    }

    return 0;
}
