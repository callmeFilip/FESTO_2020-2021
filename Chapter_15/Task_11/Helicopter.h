#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "Aircraft.h"

class Helicopter : public Aircraft
{
private:
public:
    Helicopter(int, std::string);
    virtual ~Helicopter();
};

#endif // HELICOPTER_H
