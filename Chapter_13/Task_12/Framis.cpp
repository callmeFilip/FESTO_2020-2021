//: C13:Framis.cpp
// Local overloaded new & delete
#include <cstddef> // Size_t
#include <fstream>
#include <iostream>
#include <new>
#include <ctime>

using namespace std;
ofstream out("Framis.out");
class Framis
{
    enum
    {
        sz = 10
    };
    char c[sz]; // To take up space, not used
    static unsigned char pool[];
    static bool alloc_map[];

public:
    enum
    {
        psize = 25000
    }; // frami allowed

    Framis() { out << "Framis()\n"; }
    ~Framis() { out << "~Framis() ... "; }

    void *operator new(size_t) throw(bad_alloc);
    void operator delete(void *);
};

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
        return; // Check for null pointer
    }

    // Assume it was created in the pool
    // Calculate which block number it is:
    unsigned long block = (unsigned long)m - (unsigned long)pool;
    block /= sizeof(Framis);

    out << "freeing block " << block << endl;

    // Mark it free:
    alloc_map[block] = false;
}

int main()
{
    // Preparation
    Framis *f[Framis::psize];

    // custom new
    std::clock_t start_customNew;
    std::clock_t end_customNew;
    std::clock_t duration_customNew;

    // global new
    std::clock_t start_factoryNew;
    std::clock_t end_factoryNew;
    std::clock_t duration_factoryNew;

    int framis_half = Framis::psize / 2;

    // Track
    start_customNew = clock(); // Track custom new
    for (int i = 0; i < framis_half; i++)
    {
        f[i] = new Framis;
    }
    end_customNew = clock(); // Track custom new

    // Calculate and print
    duration_customNew = end_customNew - start_customNew;
    std::cout << "Time for custom new execution: " << duration_customNew << std::endl;

    // Preparation
    int *intArr[Framis::psize];

    // Track
    start_factoryNew = clock(); // Track global new
    for (int i = framis_half; i < Framis::psize; i++)
    {
        f[i] = ::new Framis;
    }
    end_factoryNew = clock(); // Track global new

    // Calculate and print
    duration_factoryNew = end_factoryNew - start_factoryNew;
    std::cout << "Time for global new execution: " << duration_factoryNew << std::endl;

    // Cleanup
    for (int j = 0; j < Framis::psize; j++)
    {
        delete f[j]; // Delete f[10] OK
    }

    return 0;
} ///:~

/**
 * The code is generating warnings, because it is copied from the book.
 * 
 * The custom new is slower than the global new.
*/
