#include "Shape.h"
#include "Square.h"

#define FIXED

#ifdef FIXED

void function(Shape &obj) // Calls draw for Square

#else

void function(Shape obj) // Calls draw for Shape

#endif
{
    obj.draw();
}

int main()
{
    //! Shape shape; // error: cannot declare variable of abstrast type

    Square sq; // Generates a warning
    function(sq);

    return 0;
}
