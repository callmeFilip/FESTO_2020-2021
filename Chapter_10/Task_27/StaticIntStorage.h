#ifndef STATICINTSTORAGE_H
#define STATICINTSTORAGE_H
#include "IntStorage.h"
class StaticIntStorage
{
private:
    static IntStorage m_storage;

public:
    static void print();
};

#endif