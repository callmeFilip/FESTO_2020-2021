#ifndef HEADER_H
#define HEADER_H

class Listener
{
    volatile int data;

public:
    Listener();

    void v_increment() volatile;
    void increment();
};

#endif