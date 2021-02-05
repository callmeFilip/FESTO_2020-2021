#ifndef NINJA_H
#define NINJA_H
#include "Turtle.h"

class Ninja
{
private:
    Turtle m_crew;

public:
    int getAge() const { return m_crew.getAge(); }
};

#endif // NINJA_H
