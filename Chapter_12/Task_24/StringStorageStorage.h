#ifndef STRINGSTORAGESTORAGE_H
#define STRINGSTORAGESTORAGE_H

#include "StringStorage.h"

class StringStorageStorage
{
private:
    StringStorage m_storage;

public:
    StringStorageStorage(StringStorage newSt) : m_storage(newSt) {}
    StringStorageStorage() {}

    void print() const;
};

#endif // STRINGSTORAGESTORAGE_H
