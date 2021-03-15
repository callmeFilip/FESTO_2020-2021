#include <iostream>

#include "Shape.h"
#include "TPStash2.h"
#include "TStack2.h"

const int COUNT = 3;

void fill(Stack<Shape> &ptrStack)
{

    for (int i = 0; i < COUNT; i++)
    {
        if (i % 2 == 0)
        {
            ptrStack.push(new Line());
        }
        else if (i % 3 == 0)
        {
            ptrStack.push(new Circle());
        }
        else
        {
            ptrStack.push(new Square());
        }
    }
}

void fill(PStash<Shape> &ptrStash)
{

    for (int i = 0; i < COUNT; i++)
    {
        if (i % 2 == 0)
        {
            ptrStash.add(new Line());
        }
        else if (i % 3 == 0)
        {
            ptrStash.add(new Circle());
        }
        else
        {
            ptrStash.add(new Square());
        }
    }
}

void iterate(Stack<Shape> &ptrStack)
{
    for (Stack<Shape>::iterator begin = ptrStack.begin(); begin != ptrStack.end(); begin++)
    {
        (begin.current())->draw();
    }
}

void iterate(PStash<Shape> &ptrStash)
{
    for (PStash<Shape>::iterator begin = ptrStash.begin(); begin != ptrStash.end(); begin++)
    {
        (begin.current())->draw();
    }
}

int main()
{

    Stack<Shape> ptrStack;
    PStash<Shape> ptrStash;

    fill(ptrStack);
    fill(ptrStash);

    iterate(ptrStack);
    iterate(ptrStash);

    return 0;
}
