#include "Stash.h"
#include <iostream>

//main
int main()
{
    Stash doubleStash(sizeof(double));

    for (double i = 0; i < 25; i += 1.0)
    {
        doubleStash.add(&i);
    }

    double doubleStashLen = doubleStash.length();

    for (size_t i = 0; i < doubleStashLen; i++)
    {
        std::cout << "index: " << i << "\t=\t"
                  << *(double *)doubleStash.at(i) << std::endl;
    }

    return 0;
}
