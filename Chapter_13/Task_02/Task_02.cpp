#include "Counted.h"

int main()
{
    Counted *obj1 = new Counted;
    Counted *obj2 = new Counted;
    Counted *obj3 = new Counted;
    Counted *objArr = new Counted[10];

    delete obj3;
    delete obj2;
    delete obj1;

    delete[] objArr;

    return 0;
}
