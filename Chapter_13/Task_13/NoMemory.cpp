//: C13:NoMemory.cpp
// Constructor isn't called if new fails
#include <iostream>
#include <new> // bad_alloc definition
using namespace std;

#define MEMORYCHECK

class NoMemory
{
private:
    static const int SIZE;
    int *arr;

public:
    NoMemory()
    {
        arr = (int *)std::malloc(SIZE);
        // cout << "NoMemory::NoMemory()" << endl;
    }

    void *operator new(size_t sz)
    {
        // cout << "NoMemory::operator new" << endl;
        void *mem = std::malloc(sz);

#ifdef MEMORYCHECK
        if (!mem)
        {
            throw bad_alloc();
        } // "Out of memory"
#endif

        return mem;
    }
};

const int NoMemory::SIZE = 1000000000000;

int main()
{
    NoMemory *nm = 0;

#ifdef MEMORYCHECK

    do
    {
        try
        {
            nm = new NoMemory;
        }

        catch (bad_alloc)
        {
            cerr << "Out of memory exception" << endl;
        }
    } while (true);

#else

    do
    {
        nm = new NoMemory;
    } while (true);

#endif

    cout << "nm = " << nm << endl;

    return 0;
} ///:~

/**
 * If it does not check for successful memory allocation
 * The OS just terminates it
 * 
 * I can't get to the throw(), because every time i run
 * out of memory, my OS terminates my program with:
 * "terminate called recursively"
*/
