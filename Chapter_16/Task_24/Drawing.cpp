//: C16:Drawing.cpp
#include <vector> // Uses Standard vector too!
#include "Shape.h"

#include "TPStash2.h"

using namespace std;

// A Drawing is primarily a container of Shapes:
class Drawing : public PStash<Shape>
{
public:
    ~Drawing() { cout << "~Drawing" << endl; }
};

// A function template:
template <class Iter>
void drawAll(Iter start, Iter end)
{
    while (start != end)
    {
        (*start)->draw();
        start++;
    }
}

template <class Iter>
void eraseAll(Iter start, Iter end)
{
    while (start != end)
    {
        (*start)->erase();
        start++;
    }
}

int main()
{
    Drawing d;
    d.add(new Circle);
    d.add(new Square);
    d.add(new Line);

    std::cout << "Calling draw() for all elements" << std::endl;
    drawAll(d.begin(), d.end());

    std::cout << "Calling erase() for 1st and 2nd element" << std::endl;
    eraseAll(d.begin(), (d.end() - 1));

    cout << "End of main" << endl;

    return 0;
} ///:~

//Removed TStack2.h for simplicity
