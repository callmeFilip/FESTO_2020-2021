#include "Folder.h"
#include <iostream>

Folder::Folder(int size) : m_size(size) {}

Folder Retfunction()
{
    return Folder(15);
}

// This must be const, because the compiler cannot bind non-const to const value
void functionRef(const Folder &obj)
{
    std::cout << obj.getSize() << std::endl;
}

int main()
{
    functionRef(Retfunction());

    return 0;
}
