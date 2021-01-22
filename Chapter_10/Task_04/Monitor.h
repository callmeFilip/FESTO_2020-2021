#ifndef MONITOR_H
#define MONITOR_H

class Monitor
{
private:
    static int incidents;

public:
    void addIncident();
    void printIncidents() const;
};

#endif