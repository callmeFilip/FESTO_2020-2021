#ifndef MONITOR_H
#define MONITOR_H

class Monitor
{
private:
    static int incidents;

public:
    void incident();
    void decrement();
    void print() const;
};

#endif