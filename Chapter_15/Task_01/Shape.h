#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
private:
public:
    virtual ~Shape() {}

    virtual void draw()
    {
        std::cout << "Shape::draw()" << std::endl;
    }
};

#endif // SHAPE_H
