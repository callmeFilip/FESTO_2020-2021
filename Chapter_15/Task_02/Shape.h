#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
private:
public:
    Shape() { draw(); }
    virtual ~Shape() {}

    virtual void draw() = 0;
};

void Shape::draw()
{
    std::cout << "Shape::draw()" << std::endl;
}

#endif // SHAPE_H
