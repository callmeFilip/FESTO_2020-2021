#include "Stash.h"
#include <iostream>
#include <assert.h>

//initialize Stash

Stash::Stash()
{
    m_size = 1;
    m_quantity = 0;
    m_next = 0;
}

Stash::Stash(int n_size)
{
    m_size = n_size;
    m_quantity = 0;

    m_next = 0;
}

Stash::~Stash()
{
    if (!(m_storage.empty()))
    {
        std::cout << "freeing memory..." << std::endl;
        m_storage.clear();
        m_storage.shrink_to_fit();
    }
}

bool Stash::add(const void *element)
{
    //starting at next empty space
    unsigned char *temp_element = (unsigned char *)element;

    for (int i = 0; i < m_size; i++)
    {
        m_storage.push_back(temp_element[i]);
    }

    m_next++;

    return true;
}

void *Stash::at(int index)
{
    //check index out of bound
    assert(0 <= index);

    if (index >= m_next)
    {
        return nullptr;
    }

    //return address to the desired index
    return &(m_storage[index * m_size]);
}

int Stash::length()
{
    return m_next;
}
