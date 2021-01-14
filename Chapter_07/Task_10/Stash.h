#ifndef STASH_H
#define STASH_H

#include "Mem.h"

class Stash
{
    /* data */
    int m_size;     //size of each element
    int m_quantity; // number of elements
    Mem *m_storage;
    //constructors and destructors
public:
    Stash(int, int = 1); //sets the type to the size given
    ~Stash();            //cleanup

    //methods
    void add(const void *element);
    void *at(int index);
    int length();
};

#endif