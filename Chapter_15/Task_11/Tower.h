#ifndef TOWER_H
#define TOWER_H
#include <vector>
#include "Aircraft.h"

class Tower
{
private:
    std::vector<Aircraft *> m_aircrafts;
    Aircraft *findAircraft(int) const;

public:
    Tower() {}
    ~Tower();

    void addAircraft(Aircraft *);
    void removeAircraft();
    void sendAircraft(int);
    void refuelAircraft(int);
    void landAircraft(int);
    void printAircraftInformation(int) const;
};

#endif // TOWER_H
