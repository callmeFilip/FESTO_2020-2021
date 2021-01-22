#include <iostream>

#include "Monitor.h"
#include "Monitor2.h"

// Monitor::
int Monitor::incidents = 0;

void Monitor::incident()
{
    incidents++;
}

void Monitor::decrement()
{
    incidents--;
}

void Monitor::print() const
{
    std::cout << incidents << std::endl;
}

// Monitor2::
Monitor2::Monitor2(Monitor *n_monitorPtr)
    : monitorPtr(n_monitorPtr)
{
    monitorPtr->incident();
    monitorPtr->print();
}

Monitor2::~Monitor2()
{
    monitorPtr->decrement();
    monitorPtr->print();
}

Monitor2 obj(new Monitor());

int main()
{
    std::cout << "in main" << std::endl;

    std::cout << "out of main" << std::endl;

    return 0;
}
