#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : public Shape
{
private:
public:
    Square() : Shape() {}
    void draw()
    {
        std::cout << "Square::draw()" << std::endl;
    }
};

#endif // SQUARE_H
