//: C13:Framis.cpp
// Local overloaded new & delete
#include <cstddef>
// Size_t
#include <iostream>
#include <new>
#include "Framis.h"

using namespace std;

unsigned char Framis::pool[psize * sizeof(Framis)];
bool Framis::alloc_map[psize] = {false};

// Size is ignored -- assume a Framis object
void *Framis::operator new(size_t) throw(bad_alloc)
{
    for (int i = 0; i < psize; i++)
        if (!alloc_map[i])
        {
            out << "using block " << i << " ... ";
            alloc_map[i] = true; // Mark it used
            return pool + (i * sizeof(Framis));
        }
    out << "out of memory" << endl;

    throw bad_alloc();
}

void Framis::operator delete(void *m)
{
    if (!m)
    {
        return;
    } // Check for null pointer
    // Assume it was created in the pool
    // Calculate which block number it is:
    unsigned long block = (unsigned long)m - (unsigned long)pool;

    block /= sizeof(Framis);

    out << "freeing block " << block << endl;

    // Mark it free:
    alloc_map[block] = false;
}