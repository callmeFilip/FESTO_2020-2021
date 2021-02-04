#ifndef TURTLE_H
#define TURTLE_H
#include "Leg.h"

class Turtle
{
private:
    int m_age;
    Leg legs[4];

public:
    Turtle(int age = 1) : m_age(age) {}
    void print() const;
};

#endif // TURTLE_H
