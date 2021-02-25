#include "Stash.h"
#include <iostream>
#include <assert.h>
#include <cstring>

//initialize Stash

//number of elements to increment every
//time new block is allocated

Stash::Stash(int n_size, int initQuantity)
{
    m_size = n_size;
    m_quantity = 0;
    m_storage = new Mem(n_size * initQuantity);
}

Stash::~Stash()
{
    if (m_storage->moved())
    {
        std::cout << "Mem has been reallocated to another address!" << std::endl;
    }

    delete m_storage;
}

void Stash::add(const void *element)
{
    if (m_storage->msize() < m_size * (m_quantity + 1))
    {
        m_storage->pointer(m_storage->msize() * 2);
    }
    memcpy(m_storage->pointer() + (m_quantity * m_size), element, m_size);
    m_quantity++;
}

void *Stash::at(int index)
{
    //check index out of bound
    if (index >= m_quantity || index < 0)
    {
        std::cout << "Invalid index!" << std::endl;
        return nullptr;
    }

    //return address to the desired index
    return &(m_storage->pointer()[index * m_size]);
}

int Stash::length()
{
    return m_quantity;
}

int main()
{
    Stash intStash(sizeof(int));

    for (size_t i = 0; i < 10; i++)
    {
        intStash.add(new int(i));
    }

    for (int i = 0; i < intStash.length(); i++)
    {
        int *element = (int *)intStash.at(i);
        std::cout << *element << std::endl;
        delete element;
    }

    return 0;
}

//It does not make sence to keep boolean that tells if the memory has been moved
//even in ensureMinSize() is better to check available size instead of moved
