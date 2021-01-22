#include "Monitor.h"
#include <iostream>

// Monitor::
int Monitor::incidents = 0;

void Monitor::addIncident()
{
    incidents++;
}

void Monitor::printIncidents() const
{
    std::cout << incidents << std::endl;
}

// Global function
void addAndTrackIncident()
{
    static Monitor obj;
    obj.addIncident();
    obj.printIncidents();
}

//
int main(int argc, char const *argv[])
{
    const int incidentCount = 10;

    for (int i = 0; i < incidentCount; i++)
    {
        addAndTrackIncident();
    }

    return 0;
}
