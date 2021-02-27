#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : public Shape
{
private:
public:
    Square() { draw(); } // this calls the local version of draw()
    void draw()
    {
        std::cout << "Square::draw()" << std::endl;
    }
};

#endif // SQUARE_H
