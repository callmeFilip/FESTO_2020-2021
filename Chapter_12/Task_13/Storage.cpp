#include "Storage.h"

Storage::~Storage()
{
    std::cout << "Destructor called" << std::endl;
    delete m_storage;
}

std::ostream &operator<<(std::ostream &os, const Storage &obj)
{
    return os << (long)obj.m_storage;
}
