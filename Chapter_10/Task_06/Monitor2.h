#ifndef MONITOR2_H
#define MONITOR2_H
#include "Monitor.h"
class Monitor2
{
private:
    Monitor *monitorPtr;

public:
    Monitor2(Monitor *n_monitorPtr);
    ~Monitor2();
};

#endif