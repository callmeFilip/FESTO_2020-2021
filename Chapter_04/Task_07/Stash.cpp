#include <iostream>
#include <assert.h>

#include "Stash.h"
//number of elements to increment every
//time new block is allocated
const int INCREMENT = 25;

Stash::Stash()
{
    m_size = 1;
    m_quantity = 0;
    m_storage = nullptr;
    m_next = 0;
}

Stash::Stash(int n_size)
{
    m_size = n_size;
    m_quantity = 0;
    m_storage = nullptr;
    m_next = 0;
}

Stash::~Stash()
{
    if (m_storage != 0)
    {
        std::cout << "freeing memory..." << std::endl;
        delete[] m_storage;
    }
}

bool Stash::add(const void *element)
{
    //chech for avaidable space
    if (m_next >= m_quantity)
    {
        // copying the data to bigger block of memory
        inflate(INCREMENT);
    }

    //starting at next empty space
    int temp_startBytes = m_next * m_size;
    unsigned char *temp_element = (unsigned char *)element;

    for (size_t i = 0; i < m_size; i++)
    {
        m_storage[temp_startBytes + i] = temp_element[i];
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

bool Stash::inflate(int increase)
{
    //boundry check
    assert(increase > 0);

    //copying data
    int temp_newQuantity = m_quantity + increase;
    int temp_newBytes = temp_newQuantity * m_size;
    int temp_oldBytes = m_quantity * m_size;
    //creating buffer storage
    unsigned char *buffStorage = new unsigned char[temp_newBytes];

    //copying from old storage to the new one
    for (size_t i = 0; i < temp_oldBytes; i++)
    {
        buffStorage[i] = m_storage[i];
    }

    delete[] m_storage;

    m_storage = buffStorage;

    m_quantity = temp_newQuantity;

    return true;
}

int Stash::length()
{
    return m_next;
}
