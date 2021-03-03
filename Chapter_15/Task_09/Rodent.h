#ifndef RODENT_H
#define RODENT_H

#include <iostream>

// #define VIRTUAL

class Rodent
{
private:
public:
#ifdef VIRTUAL

    virtual

#endif
        ~Rodent()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

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
