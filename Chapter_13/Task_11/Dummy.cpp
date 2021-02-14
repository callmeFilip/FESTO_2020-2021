#include "Dummy.h"
#include <iostream>
#include <cstring>

Dummy::Dummy(int number) : m_number(number)
{
    std::cout << "*Dummy" << std::endl;
}

Dummy::~Dummy()
{
    std::cout << "~Dummy" << std::endl;
}

void *Dummy::operator new(size_t size) throw()
{
    void *result = malloc(size);
    memset(result, 0, size);

    if (!result)
    {
        throw std::bad_alloc();
    }

    return result;
}

void Dummy::operator delete(void *obj)
{
    if (obj)
    {
        return;
    }

    free(obj);
}

void *Dummy::operator new[](size_t size) throw()
{
    void *result = malloc(size * sizeof(Dummy));

    memset(result, 0, size * sizeof(Dummy));

    if (!result)
    {
        throw std::bad_alloc();
    }

    return result;
}

void Dummy::operator delete[](void *obj)
{
    ::delete[] obj;
}
