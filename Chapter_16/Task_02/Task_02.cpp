#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "TStack2.h"

int main()
{
    Stack<Shape> stack;
    stack.push(new Square());
    stack.push(new Triangle());
    stack.push(new Circle());

    for (Stack<Shape>::iterator it = stack.begin(); it != stack.end(); it++)
    {
        it->draw();
    }

    return 0;
}
