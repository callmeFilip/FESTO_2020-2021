#include "Derivatives.h"
#include "BlueHamster.h"
#include <vector>

int main()
{
    const size_t ARRAYSIZE = 5;

    std::vector<Rodent *> arr;
    arr.push_back(new GuineaPig);
    arr.push_back(new Gerbil);
    arr.push_back(new Hamster);
    arr.push_back(new Mouse);
    arr.push_back(new BlueHamster); // Test code does not need any changes

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

    arr.clear();
    arr.shrink_to_fit();

    return 0;
}
