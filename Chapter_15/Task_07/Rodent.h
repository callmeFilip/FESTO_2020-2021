#ifndef RODENT_H
#define RODENT_H

#include <iostream>

class Rodent
{
private:
public:
    virtual ~Rodent() {}

    virtual void gnaw() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    virtual void eat() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

#endif // RODENT_H
