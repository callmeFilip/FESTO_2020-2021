#include "Monitor.h"
#include <iostream>

int Monitor::incidents = 0;

void Monitor::addIncident()
{
    incidents++;
}

void addAndTrackIncident()
{
    static Monitor obj;
    obj.addIncident();
    obj.printIncidents();
}

void Monitor::printIncidents() const
{
    std::cout << incidents << std::endl;
}

int main(int argc, char const *argv[])
{
    const int incidentCount = 10;

    for (int i = 0; i < incidentCount; i++)
    {
        addAndTrackIncident();
    }

    return 0;
}
