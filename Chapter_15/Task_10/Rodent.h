#ifndef RODENT_H
#define RODENT_H

#include <iostream>

class Rodent
{
private:
public:
    virtual ~Rodent() = 0;
    virtual void gnaw() const = 0;
    virtual void eat() const = 0;
};

inline Rodent::~Rodent() {}

#endif // RODENT_H
