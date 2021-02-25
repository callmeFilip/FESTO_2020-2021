#include "FramisChild.h"
#include <fstream>
extern std::ofstream out;

// Size is ignored -- assume a Framis object
void *FramisChild::operator new(size_t) throw(std::bad_alloc)
{
    for (int i = 0; i < psize; i++)
        if (!Framis::alloc_map[i])
        {
            out << "using block " << i << " ... ";
            Framis::alloc_map[i] = true;                     // Mark it used
            return Framis::pool + (i * sizeof(FramisChild)); // <- The fix
        }
    out << "out of memory" << std::endl;

    throw std::bad_alloc();
}

void FramisChild::operator delete(void *m)
{
    if (!m)
    {
        return;
    } // Check for null pointer
    // Assume it was created in the pool
    // Calculate which block number it is:
    unsigned long block = (unsigned long)m - (unsigned long)Framis::pool;

    block /= sizeof(FramisChild);

    out << "freeing block " << block << std::endl;

    // Mark it free:
    Framis::alloc_map[block] = false;
}