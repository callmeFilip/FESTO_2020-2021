#include "IntStorage.h"

// The dummy values for my compiler are 0

int main()
{
    IntStorage obj;

    obj.print();
    // brackets are not required
    (obj++).print();
    (obj++).print();

    (obj--).print();
    (obj--).print();
    obj.print();

    return 0;
}
