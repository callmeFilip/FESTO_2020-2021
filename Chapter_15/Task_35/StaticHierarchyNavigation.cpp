//: C15:StaticHierarchyNavigation.cpp
// Navigating class hierarchies with static_cast
#include <iostream>
#include <typeinfo>
using namespace std;

#define CIRCLE

enum ShapeType
{
    t_shape,
    t_circle,
    t_square,
    t_other
};

class Shape
{
public:
    virtual ~Shape(){};
    virtual ShapeType WhatAmI()
    {
        return t_shape;
    }
};

class Circle : public Shape
{
    ShapeType WhatAmI()
    {
        return t_circle;
    }
};

class Square : public Shape
{
    ShapeType WhatAmI()
    {
        return t_square;
    }
};

class Other
{
    ShapeType WhatAmI()
    {
        return t_other;
    }
};

int main()
{
#ifdef CIRCLE
    Circle
#else
    Square
#endif
        c;

    Shape *s = &c; // Upcast: normal and OK

    // More explicit but unnecessary:
    s = static_cast<Shape *>(&c);

    // (Since upcasting is such a safe and common
    // operation, the cast becomes cluttering)
    Circle *cp = 0;
    Square *sp = 0;

    // Static Navigation of class hierarchies
    // requires extra type information:
    if (s->WhatAmI() == t_circle) // C++ RTTI
    {
        cp = static_cast<Circle *>(s);
    }
    else if (s->WhatAmI() == t_square)
    {
        sp = static_cast<Square *>(s);
    }

    if (cp != 0)
    {
        cout << "It's a circle!" << endl;
    }
    else if (sp != 0)
    {
        cout << "It's a square!" << endl;
    }

    // Static navigation is ONLY an efficiency hack;
    // dynamic_cast is always safer. However:
    // Other* op = static_cast<Other*>(s);
    // Conveniently gives an error message, while
    Other *op2 = (Other *)s; // Warning can be ignored
    // does not

    return 0;
} ///:~
