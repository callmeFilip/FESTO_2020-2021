#include "OwnerStack.h"
#include <iostream>

int main()
{
    Stack<int> storage;

    for (int i = 0; i < 5; i++)
    {
        storage.push(new int(i));
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << *(storage.pop()) << std::endl;
    }

    return 0;
}
