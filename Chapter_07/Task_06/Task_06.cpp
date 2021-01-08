#include "Stash3.h"
#include <iostream>

int main()
{
    Stash storageWSize(sizeof(int));
    storageWSize.add(new int(2));

    std::cout << *(int *)storageWSize.fetch(0) << std::endl;

    Stash storageWQuant(sizeof(int), 10);

    storageWQuant.add(new int(4));
    std::cout << *(int *)storageWQuant.fetch(0) << std::endl;

    return 0;
}
