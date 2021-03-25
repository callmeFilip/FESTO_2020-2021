#include <iostream>
#include "Stack_Of_Int.h"

int main()
{
    Stack_Of_Int intStorage;

    intStorage.push(new int(23));
    std::cout << *intStorage.peek() << std::endl;

    intStorage.push(new int(44));
    std::cout << *intStorage.peek() << std::endl;

    delete intStorage.pop();
    delete intStorage.pop();

    //! std::cout << *intStorage.peek() << std::endl; // error: storage is empty

    return 0;
}
