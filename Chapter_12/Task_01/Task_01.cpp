#include "Increment.h"

int main()
{
    Increment obj(1);
    obj.print();
    ++obj; // This works fine
    // obj++; // This generates error because it is not declared.
    // To solve this I must overload operator++(int).
    obj.print();

    return 0;
}
