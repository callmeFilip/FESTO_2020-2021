#include "Bird.h"
#include "Rock.h"

void Bird::fly()
{
    size++;
}

int main()
{

    Rock transformer; //size = 0

    void *vPtr = &transformer; //after cast

    ((Bird *)vPtr)->fly(); //size++ => size = 1

    return 0;
}
