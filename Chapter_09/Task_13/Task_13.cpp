#include <iostream>
#include "Shape.h"

inline void Shape::printArea()
{
    std::cout << "Area: " << findArea() << std::endl;
}

inline int Shape::findArea()
{
    return 5;
}

int main()
{
    Shape square;

    square.printArea();

    return 0;
}
