#include "Header.h"
#include <iostream>
#include <assert.h>

//initialize Stash

//number of elements to increment every
//time new block is allocated
const int INCREMENT = 25;

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

//main
int main()
{
    Stash doubleStash(sizeof(double));

    for (double i = 0; i < 25; i += 1.0)
    {
        doubleStash.add(&i);
    }

    double doubleStashLen = doubleStash.length();

    for (size_t i = 0; i < doubleStashLen; i++)
    {
        std::cout << "index: " << i << "\t=\t"
                  << *(double *)doubleStash.at(i) << std::endl;
    }

    return 0;
}
