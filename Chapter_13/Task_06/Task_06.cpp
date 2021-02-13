#include "PStash.h"
#include "Counted.h"

int main()
{
    const int ELEMENTS = 5;
    PStash CountedStash;

    for (int i = 0; i < ELEMENTS; i++)
    {
        CountedStash.add(new Counted());
    }

    for (int i = 0; i < ELEMENTS; i++)
    {
        (*(Counted *)CountedStash[i]).print();
    }

    for (int i = 0; i < ELEMENTS; i++)
    {
        delete (Counted *)CountedStash.remove(i);
    }

    return 0;
}
