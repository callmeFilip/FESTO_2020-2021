#ifndef INITIALIZER_H
#define INITIALIZER_H

#include "Mirror.h"

extern Mirror *g_objNoParam;
extern Mirror *g_objParam1;
extern Mirror *g_objParam2;
extern Mirror *g_objParam3;
extern Mirror *g_objParam4;

class Initializer
{
    static int initCount;

public:
    Initializer();
    ~Initializer();
};

static Initializer init;

#endif // INITIALIZER_H
