#include "Shape.h"
#include "Square.h"

int main()
{
    //! Shape shape; // error: cannot declare variable of abstrast type

    Square sq; // Generates a warning

    return 0;
}
