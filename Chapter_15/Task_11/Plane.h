#ifndef PLANE_H
#define PLANE_H
#include "Aircraft.h"

class Plane : public Aircraft
{
private:
public:
    Plane(int, std::string);
    virtual ~Plane();
};

#endif // PLANE_H
