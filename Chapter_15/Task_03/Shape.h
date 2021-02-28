#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
private:
public:
    Shape() {}
    virtual ~Shape() {}

    virtual void draw();
};

void Shape::draw()
{
    std::cout << "Shape::draw()" << std::endl;
}

#endif // SHAPE_H
