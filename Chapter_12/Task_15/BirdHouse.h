#ifndef BIRDHOUSE_H
#define BIRDHOUSE_H
#include "Bird.h"

class BirdHouse
{
private:
    Bird m_BirdObj;
    Bird *m_BirdPtr;
    Bird &m_BirdRef;

    // Disallow operator= and copy-constructor
    BirdHouse &operator=(const BirdHouse &other);
    BirdHouse(const BirdHouse &other);

public:
    BirdHouse(Bird BirdObj, Bird *BirdPtr, Bird &BirdRef);
    ~BirdHouse() { delete m_BirdPtr; }
    friend std::ostream &operator<<(std::ostream &os, const BirdHouse &obj);
};

#endif // BIRDHOUSE_H
