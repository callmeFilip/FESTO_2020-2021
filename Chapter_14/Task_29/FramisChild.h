#ifndef FRAMISCHILD_H
#define FRAMISCHILD_H
#include "Framis.h"

class FramisChild : public Framis
{
private:
    static unsigned char pool[];
    static bool alloc_map[];

public:
    FramisChild() : Framis() { out << " - " << std::endl; }
    ~FramisChild() { out << " - " << std::endl; }
    void *operator new(size_t);
    void operator delete(void *);
};

#endif // ~FRAMISCHILD_H
