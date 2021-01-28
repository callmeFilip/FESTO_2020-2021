#ifndef STATICHOLDER_H
#define STATICHOLDER_H
#include "StringHolder.h"
class StaticStringHolder
{
private:
    static const int ARRAYSIZE = 10;
    static const StringHolder cArr[ARRAYSIZE];
    static StringHolder Arr[ARRAYSIZE];

public:
    static void print_cArr();
    static void print_Arr();
};

#endif // STATICHOLDER_H
