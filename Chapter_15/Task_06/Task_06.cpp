#include "Derivatives.h"

int main()
{
    const size_t ARRAYSIZE = 4;
    Rodent *arr[] = {new GuineaPig, new Gerbil, new Hamster, new Mouse};

    for (size_t i = 0; i < ARRAYSIZE; i++)
    {
        arr[i]->Rodent::eat();
        arr[i]->Rodent::gnaw();
        std::cout << std::endl;
    }

    for (size_t i = 0; i < ARRAYSIZE; i++)
    {
        delete arr[i]; // i am not sure if the right object types will be deleted with delete[]
        arr[i] = 0;
    }

    return 0;
}
