#include <iostream>
#include "Folder.h"

Folder::Folder(int size) : m_size(size) {}

void functionRef(const Folder obj)
{
    std::cout << obj.getSize() << std::endl;
}

int main()
{
    functionRef(Folder(15)); // copy-constructor is private within this context

    return 0;
}