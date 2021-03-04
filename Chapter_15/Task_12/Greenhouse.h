#ifndef GREENHOUSE_H
#define GREENHOUSE_H
#include "Building.h"
#include "Plant.h"

#include <vector>
class Greenhouse : public Building
{
private:
    std::vector<Plant *> m_plants;

public:
    Greenhouse(int);
    ~Greenhouse();
    void addPlant(Plant *obj);
    Plant *popPlant();

    Plant *operator[](int);
};

#endif // GREENHOUSE_H
