#include <iostream>
#include "IntStorage.h"
#include "StaticIntStorage.h"

void IntStorage::print() const
{
    std::cout << m_value << std::endl;
}

IntStorage StaticIntStorage::m_storage(101);

void StaticIntStorage::print()
{
    m_storage.print();
}

int main()
{
    StaticIntStorage::print();

    return 0;
}
