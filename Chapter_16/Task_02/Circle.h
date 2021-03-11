#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape
{
private:
public:
    void draw()
    {
        std::cout << "Circle::draw()" << std::endl;
    }
};

#endif // CIRCLE_H
