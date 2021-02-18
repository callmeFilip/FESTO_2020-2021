#ifndef MEMORYCHECKER_H
#define MEMORYCHECKER_H
#include "Widget.h"
class MemoryChecker
{
private:
    static MemoryChecker memCheck;

    MemoryChecker() {}
    MemoryChecker(MemoryChecker &);

public:
    ~MemoryChecker();
};

MemoryChecker MemoryChecker::memCheck;

MemoryChecker::~MemoryChecker()
{
    std::cout << "There are: " << Widget::m_ptrStorage.size() << " undestructed elements!" << std::endl;
}

#endif // MEMORYCHECKER_H
