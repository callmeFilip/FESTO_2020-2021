#ifndef DERIVATIVES_H
#define DERIVATIVES_H
#include "Rodent.h"

class Mouse : public Rodent
{
private:
public:
    virtual ~Mouse() {}

    void gnaw() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void eat() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

class Hamster : public Rodent
{
private:
public:
    virtual ~Hamster()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void gnaw() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void eat() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

class Gerbil : public Rodent
{
private:
public:
    virtual ~Gerbil() {}

    void gnaw() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void eat() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

class GuineaPig : public Rodent
{
private:
public:
    virtual ~GuineaPig() {}

    void gnaw() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void eat() const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

#endif // DERIVATIVES_H
