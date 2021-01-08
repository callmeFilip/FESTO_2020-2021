#include "Stack3.h"
#include <iostream>
#include <string>

void printStack(Stack *storage, const unsigned int ARRAYSIZE)
{
    for (unsigned int i = 0; i < ARRAYSIZE; i++)
    {
        std::cout << *(std::string *)storage->pop() << std::endl;
    }
}

int main()
{
    const unsigned int ARRAYSIZE = 3;

    Stack storage;

    std::string firstName = "Ivan";
    std::string secondName = "Krasi";
    std::string thirdName = "Petur";

    storage.push(&firstName);
    storage.push(&secondName);
    storage.push(&thirdName);

    printStack(&storage, ARRAYSIZE);

    void *strArr[] = {new std::string(firstName), new std::string(secondName), new std::string(thirdName)};
    Stack arrStorage(strArr, ARRAYSIZE);

    printStack(&arrStorage, ARRAYSIZE);

    delete[](std::string *) strArr;

    return 0;
}
