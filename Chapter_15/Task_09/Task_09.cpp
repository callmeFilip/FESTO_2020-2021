#include "Derivatives.h"

void rodentTerminator(Rodent *obj)
{
    delete obj; // If VIRTUAL is not defined in Rodent.h
                // generates warning and don't call the ~Hamster()
}

int main()
{
    Hamster *bunny = new Hamster();

    rodentTerminator(bunny);

    return 0;
}