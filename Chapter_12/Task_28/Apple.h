#ifndef APPLE_H
#define APPLE_H
#include "Orange.h"

class Apple
{
private:
public:
#ifdef EXPLICIT

    explicit

#endif
        Apple(Orange orange)
    {
    } // Warning can be ignored
};

#endif // APPLE_H
