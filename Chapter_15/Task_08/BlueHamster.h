#ifndef BLUEHAMSTER_H
#define BLUEHAMSTER_H
#include "Derivatives.h"

class BlueHamster : public Hamster
{
private:
public:
    virtual ~BlueHamster(){};
    void gnaw() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void eat() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

#endif // BLUEHAMSTER_H
