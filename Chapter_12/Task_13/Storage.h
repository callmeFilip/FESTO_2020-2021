#ifndef STORAGE_H
#define STORAGE_H
#include <iostream>

//#define FIX

class Storage
{
private:
public:
    const int *m_storage;

    Storage(const int *ptr = 0) : m_storage(ptr) {}
    ~Storage();

#ifdef FIX
    Storage &operator=(const Storage &other)
    {
        if (this != &other)
        {
            m_storage = new int(*other.m_storage);
        }
        return *this;
    }
#endif

    friend std::ostream &operator<<(std::ostream &os, const Storage &obj);
};

#endif // STORAGE_H
