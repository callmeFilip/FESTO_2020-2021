#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
    const size_t SIZE = 3;

    Shape *ptr[SIZE] = {new Square(), new Triangle(), new Circle()};

    for (size_t i = 0; i < SIZE; i++)
    {
        ptr[i]->draw();
        delete ptr[i];
    }

    return 0;
}
