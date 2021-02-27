#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape
{
private:
public:
    void draw()
    {
        std::cout << "Triangle::draw()" << std::endl;
    }
};

#endif // TRIANGLE_H
