#ifndef BIRDHOUSE_H
#define BIRDHOUSE_H
#include "Bird.h"

class BirdHouse
{
private:
    int m_num;

    Bird m_BirdObj;
    Bird *m_BirdPtr;
    Bird &m_BirdRef;

    // Disallow operator= and copy-constructor
    BirdHouse &operator=(const BirdHouse &other);
    BirdHouse(const BirdHouse &other);

public:
    BirdHouse(Bird BirdObj, Bird *BirdPtr, Bird &BirdRef);
    BirdHouse(int num = 0);
    ~BirdHouse()
    {
        delete m_BirdPtr;
        delete &m_BirdRef;
    }
    void printNum() const;

    friend const BirdHouse operator+(const BirdHouse &left, const BirdHouse &right);
    friend const BirdHouse operator-(const BirdHouse &left, const BirdHouse &right);
    friend const BirdHouse operator*(const BirdHouse &left, const BirdHouse &right);
    friend const BirdHouse operator/(const BirdHouse &left, const BirdHouse &right);

    friend std::ostream &operator<<(std::ostream &os, const BirdHouse &obj);
};

#endif // BIRDHOUSE_H
