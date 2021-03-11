//: C16:TPStash.h
#ifndef TPSTASH_H
#define TPSTASH_H
#include <cstring>
#include "require.h"
#include <iostream>

template <class T, int incr = 10>
class PStash
{
    int next; // Next empty space
    T **storage;
    int inflatesize;
    void inflate();

public:
    int quantity; // Number of storage spaces
                  // moved for demonstational purpose

    PStash() : next(0), storage(0), inflatesize(incr), quantity(0) {}
    ~PStash();
    int add(T *element);
    T *operator[](int index) const; // Fetch
    // Remove the reference from this PStash:
    T *remove(int index);
    // Number of elements in Stash:
    int count() const { return next; }
    void changeInflateSize(int infsz) { inflatesize = infsz; }
};

template <class T, int incr>
int PStash<T, incr>::add(T *element)
{
    if (next >= quantity)
        inflate();
    storage[next++] = element;

    return (next - 1); // Index number
}

// Ownership of remaining pointers:
template <class T, int incr>
PStash<T, incr>::~PStash()
{
    for (int i = 0; i < next; i++)
    {
        delete storage[i]; // Null pointers OK
        storage[i] = 0;    // Just to be safe
    }

    delete[] storage;
}

template <class T, int incr>
T *PStash<T, incr>::operator[](int index) const
{
    require(index >= 0,
            "PStash::operator[] index negative");
    if (index >= next)
        return 0; // To indicate the end
    require(storage[index] != 0,
            "PStash::operator[] returned null pointer");

    // Produce pointer to desired element:
    return storage[index];
}

template <class T, int incr>
T *PStash<T, incr>::remove(int index)
{
    // operator[] performs validity checks:
    T *v = operator[](index);
    // "Remove" the pointer:
    if (v != 0)
        storage[index] = 0;

    return v;
}

template <class T, int incr>
void PStash<T, incr>::inflate()
{
    std::cout << "--inflate called--" << std::endl;
    inflatesize *= 2;
    std::cout << "increase with: " << inflatesize << " elements" << std::endl;
    int increase = inflatesize;
    const int psz = sizeof(T *);

    T **st = new T *[quantity + increase];

    memset(st, 0, (quantity + increase) * psz);
    memcpy(st, storage, quantity * psz);

    quantity += increase;

    delete[] storage; // Old storage

    storage = st; // Point to new memory
}

#endif // TPSTASH_H ///:~
